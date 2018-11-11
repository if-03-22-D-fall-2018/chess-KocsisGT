/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:			chess.h
 * Author:			Kocsis Patrik
 * Due Date:		November 11, 2018
 * ----------------------------------------------------------
 * Description:
 * Basic chess functions in work.
 * ----------------------------------------------------------
 */

#include <stdbool.h>
#ifndef ___CHESS_H
#define ___CHESS_H

enum Color {White,Black};
enum PieceType
{
  Pawn,Knight,Rook,Bishop,Queen,King,NoPiece
};

struct ChessPiece
{
  enum Color color;
  enum PieceType type;
};

//Move
enum Move
{
	NormalMove,CaptureMove
};

//Chess Square
struct ChessSquare
{
  bool is_occupied;
  struct ChessPiece piece;
};

typedef int Rank;
typedef char File;
typedef struct ChessSquare ChessBoard[8][8];

//Get Piece
struct ChessPiece get_piece(ChessBoard chess_board, File file , Rank rank);

//Is Piece
bool is_piece(struct ChessPiece piece,enum Color color,enum PieceType type);

//Chess Board
void init_chess_board(ChessBoard chess_board);

//Chess Board Setup
void setup_chess_board(ChessBoard chess_board);

//Square Occupied
bool is_square_occupied(ChessBoard chess_board,File file,Rank rank);

//Get Square
struct ChessSquare* get_square(ChessBoard chess_board,File file, Rank rank);

//Add Piece
bool add_piece(ChessBoard chess_board, File file ,Rank rank,struct ChessPiece piece);

//Get Piece
struct ChessPiece get_piece(ChessBoard chess_board, File file ,File rank);

//Remove Piece
bool remove_piece(ChessBoard chess_board, File file ,Rank rank);

//Rank
bool squares_share_rank(File file1, Rank rank1, File file2, Rank rank2);

//File
bool squares_share_file(File file1, Rank rank1, File file2, Rank rank2);

//Diagonal
bool squares_share_diagonal(File file1, Rank rank1, File file2, Rank rank2);

//Knight
bool squares_share_knights_move(File file1, Rank rank1, File file2, Rank rank2);

//King
bool squares_share_kings_move(File file1, Rank rank1, File file2, Rank rank2);

//Pawn
bool squares_share_pawns_move(enum Color color,enum Move move, File file1, Rank rank1, File file2, Rank rank2);

//Queen
bool squares_share_queens_move(File file1, Rank rank1, File file2, Rank rank2);

#endif
