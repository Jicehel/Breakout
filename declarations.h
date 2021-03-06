#ifndef _DECLARATIONS_H_
#define _DECLARATIONS_H_

#define NUM_HIGHSCORE     5
#define NAMELENGTH        12
#define NB_LEVEL          10
#define LightSides        0
#define LightPaddle       0
#define paddleDefaulSize  16
#define YPaddle           62

#define COLUMNS           10   // Columns of bricks
#define ROWS              5    // Rows of bricks
#define paddlewidthmin    4
#define paddlewidthmax    30

#define ballSizeMini      2
#define ballSizeMaxi      5
#define Nb_def_glue       20

#define MaxXSpeed         1.4
#define BonusSpeed        2
#define BonusWidth        7
#define BonusHeight       4

#define Ytop              12
#define BrickWidth        8
#define BrickHeight       4
#define NbPointsBrick     10
#define Demultiplicateur  3

// Game states
#define Titlescreen       0
#define Running           1
#define Gameover          2
#define Restart           3
#define Pause             4

extern void initHighscore();
extern void drawHighScores();
extern void saveHighscore(unsigned int test_score);
extern void Ball();
extern void Brick();
extern void draw_brick(int8_t BrickType, int8_t XB, int8_t YB);
extern void Bonus();
extern void Draw_Bonus(int i);
extern void Test_collision_Bonus(int i) ;
extern void Clear_bonus(int i);
extern void Add_bonus(int Type,int BX,int BY);

extern int16_t score;
extern const byte font5x7[];
extern int highscore[NUM_HIGHSCORE];
extern int8_t level_brick[NB_LEVEL][ROWS * COLUMNS + 1];
extern bool drawNewHighscore(unsigned int newscore);
extern Image StartScreen;
extern Image Paddle_cg;
extern Image Paddle_cd;
extern Image Ball2;
extern Image Ball3;
extern Image Ball4;
extern Image Ball5;
extern Image BR[12];
extern Image barre;
extern Image Bonus_vie;
extern Image Malus_vie;
extern Image Balle4Metal;
extern Image Bonus_paddle;
extern Image Malus_paddle;
extern Image Bonus_Glue;
extern Image Bonus_Glue;
extern Image Malus_mini_raquette_rouge;
extern Image MalusBalle_vert;
extern Image BonusBalle_vert;
extern Image Bonus_balle_acier;
extern int8_t defaultBonusBrick;
extern int8_t Nb_bricks;

#endif _DECLARATIONS_H_
