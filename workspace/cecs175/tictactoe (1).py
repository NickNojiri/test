# Tic tac toe!
def print_board(board):
    print("- 0 1 2  ")
    i = 0
    for r in board:
        print(i ,end=" ")
        i+=1
        for c in r:
            if c == 0:
                print(". ", end="")
            elif c == 1:
                print("X ", end="")
            else:
                print("O ", end="")
        print("")


def is_valid(r, c, board):
    if (c<0 or c>2)or(r<0 or r>2):
        return False
    elif board[r][c] == 0:
        return True
    return False

def is_winner(board):
    for col in range (3):
#vert
        row = 0
        if board[row][col] == board[row+1][col] == board[row+2][col] and board[row][col] != 0:
            return True
    for row in range(3):
        col = 0
 #h

        if board[row][col] == board[row][col+1] == board[row][col+2] and board[row][col] != 0:
                return True

#d
    if board[0][0] == board[2][2] == board[1][1] and board[1][1] != 0:
        return True
    if board[2][2] == board[0][2] == board[2][0] and board[2][2] != 0:
        return True

    return False

def main():
    board = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
    current = 1
    for i in range(9):

        print_board(board)
        if is_winner(board) == True:

            break

        r = int(input("Give Row!"))
        c = int(input("Give Column!"))
        while not is_valid(r, c, board):
            r = int(input("Give Row!"))
            c = int(input("Give Column!"))

        board[r][c] = current
        if current == 1:
            current = 2
        else:
            current = 1
    print_board(board)


main()
