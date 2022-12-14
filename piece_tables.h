#include <iostream>


// a, b, c, d, e, f, g, h

int pawn_tb[8][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0}, //8th rank
    {80, 80, 80, 80, 80, 80, 80, 80}, //7th rank
    {50, 45, 50, 55, 55, 70, 45, 50}, //6th rank
    {30, 30, 35, 40, 40, 20, 30, 30}, //5th rank
    {15, 15, 20, 30, 35, -10, 10, 18}, //4th rank
    {-10, -10, 0, -20, -20, -50, 10, -10}, //3rd rank
    {0, 0, -10, -30, -30, 20, 0, 0}, //2nd rank
    {0, 0, 0, 0, 0, 0, 0, 0}, //1st  rank 
};

int pawn_ending[8][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0}, //8th rank
    {120, 120, 120, 120, 120, 120, 120, 120}, //7th rank
    {70, 70, 70, 70, 70, 70, 70, 70}, //6th rank
    {30, 30, 30, 40, 40, 40, 30, 30}, //5th rank
    {10, 10, 10, 10, 10, 10, 10, 10}, //4th rank
    {-30, -20, -20, -20, -20, -20, -20, -30}, //3rd rank
    {-50, -30, -30, -30, -30, -30, -30, -50}, //2nd rank
    {0, 0, 0, 0, 0, 0, 0, 0}, //1st  rank 
};


int knight_tb [8][8] = {
    {-50, -30, -30, -30, -30, -30, -30, -50}, //8th rank
    {-30, -10, -10, -10, -10, -10, -10, -30}, //7th rank
    {-30, 25, 50, 45, 45, 60, 55, -30}, //6th rank
    {-30, 25, 30, 40, 40, 55, 50, -30}, //5th rank
    {-30, 5, 30, 30, 30, 30, 5, -30}, //4th rank
    {-30, 17, 25, 20, 20, 25, 18, -30}, //3rd rank
    {-40, -10, -10, -10, -10, -10, -10, -40}, //2nd rank
    {-50, -10, -20, -20, -20, 0, -10, -50}, //1st  rank 
};


int bishop_tb [8][8] = {
    {-40, -30, -30, -30, -30, -30, -30, -40}, //8th rank
    {-30, -10, -10, -10, -10, -10, -10, -30}, //7th rank
    {-30, -25, -25, -25, -25, -25, -25, -30}, //6th rank
    {10, 30, 10, 10, 10, 10, 30, 10}, //5th rank
    {15, 15, 35, 15, 15, 35, 15, 15}, //4th rank
    {10, 25, 20, 20, 20, 20, 25, 10}, //3rd rank
    {0, 35, 10, 0, 0, 10, 35, 0 }, //2nd rank
    {-10, 0, -10, -10, -10, -10, 0, -10}, //1st  rank 
};

int rook_tb [8][8] = {
    {20, 10, 10, 10, 10, 10, 10, 10}, //8th rank
    {60, 60, 60, 60, 60, 60, 60, 60}, //7th rank
    {30, 20, 20, 20, 20, 20, 20, 30}, //6th rank
    {10, 10, 10, 10, 10, 10, 10, 10}, //5th rank
    {5, 5, 5, 10, 10, 10, 10, 10}, //4th rank
    {0, 0, 5, 15, 15, 0, 0, 0}, //3rd rank
    {0, 0, 0, 5, 5, 0, 0, 0}, //2nd rank
    {-10, -10, 10, 30, 30, 10, -10, -10}, //1st  rank 
};

int queen_tb [8][8] = {
    {-10, -10, -10, -10, -10, -10, -10, -10}, //8th rank
    {10, 10, 10, 10, 10, 10, 10, -10}, //7th rank
    {-10, 20, 20, 20, 20, 20, 20, -10}, //6th rank
    {5, 10, 22, 26, 26, 22, 10, 5}, //5th rank
    {5, 0, 15, 20, 20, 20, 15, 5}, //4th rank
    {-20, 15, 15, 15, 15, 20, 20, -20}, //3rd rank
    {-20, -20, 20, 5, 5, 0, -10, -20}, //2nd rank
    {-30, -20, 0, 0, 0, -20, -20, -30}, //1st  rank 
};


int king_middle [8][8] = {
    {-30, -50, -50, -80, -80, -50, -50, -30}, //8th rank
    {-30, -50, -50, -80, -80, -50, -50, -30}, //7th rank
    {-30, -50, -50, -80, -80, -50, -50, -30}, //6th rank
    {-30, -50, -50, -80, -80, -50, -50, -30}, //5th rank
    {-30, -50, -50, -80, -80, -50, -50, -30}, //4th rank
    {-20, -30, -40, -40, -40, -40, -20, -20}, //3rd rank
    {20, 10, -25, -30, -30, -25, 10, 20}, //2nd rank
    {20, 30, -20, -10, -10, -10, 30, 20}, //1st  rank 
};

int king_ending [8][8] = {
    {-50, -40, -40, -40, -40, -40, -40, -50}, //8th rank
    {-50, 10, 15, 20, 20, 20, 10, -50}, //7th rank
    {-50, 35, 50, 55, 55, 55, 35, -50}, //6th rank
    {-50, 30, 40, 40, 40, 35, 30, -50}, //5th rank
    {-50, 20, 25, 30, 30, 25, 20, -50}, //4th rank
    {-50, 10, 15, 20, 20, 20, 10, -50}, //3rd rank
    {-50, -10, 0, 5, 5, 0, -10, -50}, //2nd rank
    {-50, -40, -35, -35, -35, -35, -40, -50}, //1st  rank 
};

