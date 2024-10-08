/*
This file is part of Dragonhorse, Free and open-source UCI chess engine.

Copyright (c) 2024 the Dragonhorse developers

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef UCI_H
#define UCI_H

#ifndef NAME
#define NAME ("Dragonhorse")
#endif

#define AUTHOR ("the Dragonhorse developers")

#include "chess/move.h"
#include "utils/utils.h"

namespace uci
{
    extern void init();
    extern void print_currmove(Move move, int move_num, time_ms start_time,
                               bool flipped);
    extern void print_search(int score, int depth, int bound, time_ms time,
                             std::vector<Move>& pv, bool flipped);
    extern std::string get_pv_string(std::vector<Move>& pv, bool flipped);
}

#endif
