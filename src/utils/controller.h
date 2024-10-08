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

#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "utils.h"

struct Controller
{
    std::uint64_t nodes_searched;
    std::uint64_t tb_hits;
    time_ms start_time;
    time_ms end_time;
    volatile bool time_dependent;
    volatile bool analyzing;
    volatile bool stop_search;
    bool limited_search;
    int max_ply;
    std::vector<uint32_t> search_moves;
};

inline Controller controller;

inline bool stopped()
{
    if (controller.stop_search)
        return true;

    if (controller.time_dependent)
    {
        time_ms curr_time = utils::curr_time();
        if (curr_time >= controller.end_time)
            return true;
        if (controller.end_time - curr_time <= 10)
            return true;
    }

    return false;
}

#endif
