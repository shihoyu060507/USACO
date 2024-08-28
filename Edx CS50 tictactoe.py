"""
Tic Tac Toe Player
"""

import math
import copy

X = "X"
O = "O"
EMPTY = None


def initial_state():
    """
    Returns starting state of the board.
    """
    return [[EMPTY, EMPTY, EMPTY],
            [EMPTY, EMPTY, EMPTY],
            [EMPTY, EMPTY, EMPTY]]


def player(board):
    """
    Returns player who has the next turn on a board.
    """
    num_X, num_O = 0, 0

    for row in range(len(board)):
        for column in range (len(board[row])):
            if board[row][column] == X: num_X += 1

            elif board[row][column] == O: num_O += 1

    if num_X > num_O: return O
    
    else: return X 

def actions(board):
    """
    Returns set of all possible actions (i, j) available on the board.
    """
    moves = set()

    for row in range (len(board)):
        for column in range(len(board[0])):
            if board[row][column] == EMPTY: moves.add((row, column))

    return moves        


def result(board, action):
    """
    Returns the board that results from making move (i, j) on the board.
    """

    if action not in actions(board): raise ValueError("Invalid Action")
    elif terminal(board): raise ValueError("Game Over")

    row,column = action
    copied_board = copy.deepcopy(board) 
    copied_board[row][column] = player(board) 
    return copied_board


def rowcheck(board, player): 
    for row in range(len(board)):
        if board[row][0] == player and board[row][1] == player and board[row][2] == player: return True
    return False

def colcheck(board, player): 
    for column in range(len(board)):
        if board[0][column] == player and board[1][column] == player and board[2][column] == player: return True
    return False

def top(board, player): 
    cnt = 0
    for row in range(len(board)):
        for column in range(len(board[row])):
            if row == column and board[row][column] == player: cnt += 1
    if cnt == 3: return True
    else: return False

def bottom(board, player):
    cnt = 0
    for row in range(len(board)):
        for column in range(len(board[row])):
            if (len(board)-row-1) == column and board[row][column] == player: cnt += 1
    if cnt == 3: return True
    else: return False

def winner(board):
    """
    Returns the winner of the game, if there is one.
    """
    if rowcheck(board, X) or colcheck(board, X) or top(board, X) or bottom(board, X): return X
    elif rowcheck(board, O) or colcheck(board, O) or top(board, O) or bottom(board, O): return O
    else: return None


def terminal(board):
    """
    Returns True if game is over, False otherwise.
    """
    if winner(board) == X: return X
    if winner(board) == O: return O

    for row in range(len(board)):
        for column in range(len(board[row])):
            if board[row][column] == EMPTY: return False
    return True

def utility(board):
    """
    Returns 1 if X has won the game, -1 if O has won, 0 otherwise.
    """
    if winner(board) == X: return 1
    elif winner(board) == O: return -1
    else: return 0

def max_Value(board):
    v = -math.inf
    if terminal(board): return utility(board)
    for action in actions(board): v = max(v,min_Value(result(board, action)))
    return v

def min_Value(board):
    v = math.inf
    if terminal(board): return utility(board)
    for action in actions(board): v = min(v,max_Value(result(board, action)))
    return v

def minimax(board):
    """
    Returns the optimal action for the current player on the board.
    """
    
    if terminal(board): return None

    elif player(board) == X:
        temp = []
        for action in actions(board):
            temp.append([min_Value(result(board,action)),action])
        return sorted(temp, key=lambda x: x[0], reverse = True)[0][1]
    
    elif player(board) == O:
        temp = []
        for action in actions(board):
            temp.append([max_Value(result(board,action)),action])
        return sorted(temp, key=lambda x: x[0], reverse = True)[0][1]
