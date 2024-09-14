#include <iostream>
using namespace std;

class Sudoku {
private:
    int board[9][9];

public:
    // Hàm khởi tạo, khởi tạo tất cả các giá trị trong bảng là 0
    Sudoku() {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                board[i][j] = 0;
            }
        }
    }

    // Hàm in bảng Sudoku
    void printBoard() {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Hàm kiểm tra tính hợp lệ của một số trong bảng Sudoku
    bool isValid(int row, int col, int num) {
        // Kiểm tra hàng
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num) return false;
        }

        // Kiểm tra cột
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == num) return false;
        }

        // Kiểm tra ô 3x3
        int startRow = row - row % 3;
        int startCol = col - col % 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i + startRow][j + startCol] == num) return false;
            }
        }

        return true;
    }

    // Hàm giải Sudoku bằng đệ quy
    bool solveSudoku() {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == 0) {
                    for (int num = 1; num <= 9; num++) {
                        if (isValid(row, col, num)) {
                            board[row][col] = num;

                            if (solveSudoku()) {
                                return true;
                            }

                            board[row][col] = 0; // Quay lui nếu giải không thành công
                        }
                    }
                    return false; // Không có số hợp lệ cho ô này
                }
            }
        }
        return true; // Sudoku đã được giải
    }

    // Hàm khởi tạo bảng Sudoku với một số giá trị ban đầu
    void initializeBoard() {
        int initialBoard[9][9] = {
            {0, 7, 2, 0, 0, 1, 0, 0, 0},
            {0, 4, 0, 0, 0, 0, 0, 1, 0},
            {0, 3, 1, 6, 0, 0, 0, 5, 0},
            {0, 0, 5, 9, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 4, 2, 0},
            {0, 2, 8, 0, 7, 0, 5, 6, 0},
            {1, 5, 7, 0, 9, 0, 0, 3, 2},
            {0, 0, 6, 0, 1, 8, 7, 0, 0},
            {0, 8, 0, 0, 0, 0, 0, 0, 6}
        };

        // Sao chép giá trị từ initialBoard vào board
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                board[i][j] = initialBoard[i][j];
            }
        }
    }
};

int main() {
    Sudoku game;

    // Khởi tạo bảng Sudoku
    game.initializeBoard();

    // In bảng Sudoku ban đầu
    cout << "Bảng Sudoku ban đầu:\n";
    game.printBoard();

    // Giải Sudoku
    if (game.solveSudoku()) {
        cout << "\nBảng Sudoku sau khi giải:\n";
        game.printBoard();
    } else {
        cout << "\nKhông thể giải được bảng Sudoku.\n";
    }
    system("Pause");
    return 0;
}
