bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.') continue;
            int count=0;
            for(int k=0;k<9;k++)
                if(board[i][j]==board[i][k]) count++;
            for(int k=0;k<9;k++)
                if(board[i][j]==board[k][j]) count++;
            for(int p=(i/3)*3;p<(i/3)*3+3;p++){
               for(int q=(j/3)*3;q<(j/3)*3+3;q++){
                if(board[i][j]==board[p][q]) count++;
                }
            }
            if(count>3) return false;
        }
    }
    return true;
}