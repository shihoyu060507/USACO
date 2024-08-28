import os
import random
import re
import sys

DAMPING = 0.85
SAMPLES = 10000


def main():
    if len(sys.argv) != 2:
        sys.exit("Usage: python pagerank.py corpus")
    corpus = crawl(sys.argv[1])
    ranks = sample_pagerank(corpus, DAMPING, SAMPLES)
    print(f"PageRank Results from Sampling (n = {SAMPLES})")
    for page in sorted(ranks):
        print(f"  {page}: {ranks[page]:.4f}")
    ranks = iterate_pagerank(corpus, DAMPING)
    print(f"PageRank Results from Iteration")
    for page in sorted(ranks):
        print(f"  {page}: {ranks[page]:.4f}")


def crawl(directory):
    """
    Parse a directory of HTML pages and check for links to other pages.
    Return a dictionary where each key is a page, and values are
    a list of all other pages in the corpus that are linked to by the page.
    """
    pages = dict()

    # Extract all links from HTML files
    for filename in os.listdir(directory):
        if not filename.endswith(".html"):
            continue
        with open(os.path.join(directory, filename)) as f:
            contents = f.read()
            links = re.findall(r"<a\s+(?:[^>]*?)href=\"([^\"]*)\"", contents)
            pages[filename] = set(links) - {filename}

    # Only include links to other pages in the corpus
    for filename in pages:
        pages[filename] = set(
            link for link in pages[filename]
            if link in pages
        )

    return pages


def transition_model(corpus, page, damping_factor):
    """
    Return a probability distribution over which page to visit next,
    given a current page.

    With probability `damping_factor`, choose a link at random
    linked to by `page`. With probability `1 - damping_factor`, choose
    a link at random chosen from all pages in the corpus.
    """
    arr = {}
    current_link = len(corpus[page])

    if current_link:            
        for link in corpus:
            arr[link] = (1-damping_factor)/len(corpus)

        for link in corpus[page]:
            arr[link] += damping_factor/current_link
    else:
        for link in corpus:
            arr[link] = 1/len(corpus)
    
    return arr

def sample_pagerank(corpus, damping_factor, n):
    """
    Return PageRank values for each page by sampling `n` pages
    according to transition model, starting with a page at random.

    Return a dictionary where keys are page names, and values are
    their estimated PageRank value (a value between 0 and 1). All
    PageRank values should sum to 1.
    """
    rank = {}
    for key in corpus:
        rank[key] = 0
        
    page = random.choices(list(corpus))[0]

    for i in range(1, n):

        current_page = transition_model(corpus, page, damping_factor)
        arr = []
        allPossibilities = []
        
        for key, num in current_page.items():
            arr.append(key)
            allPossibilities.append(num)
        
        page = random.choices(arr, weights=allPossibilities)[0]
        rank[page] += (1 / n)

    return rank

def iterate_pagerank(corpus, damping_factor):
    """
    Return PageRank values for each page by iteratively updating
    PageRank values until convergence.

    Return a dictionary where keys are page names, and values are
    their estimated PageRank value (a value between 0 and 1). All
    PageRank values should sum to 1.
    """

    rank = {}
    temp = 0.0005
    n = len(corpus)

    for key in corpus: rank[key] = 1/n

    while True:
        cnt = 0

        for key in corpus:
            new_page = (1 - damping_factor) / n
            x = 0
            for page in corpus:
                if key in corpus[page]:
                    new_link = len(corpus[page])
                    x = x + rank[page] / new_link

            x = damping_factor * x
            new_page += x

            if abs(rank[key] - new_page) < temp:
                cnt += 1
            
            rank[key] = new_page
        
        if cnt == n:
            break

    return rank


if __name__ == "__main__":
    main()
