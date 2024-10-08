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

#include <iostream>
#include <string>

#include "uci.h"
#include "chess/bitboard.h"
#include "evaluate.h"

int main()
{
    std::cout << "Dragonhorse dev-22082024-nogit by the Dragonhorse developers" << std::endl;

    std::ios_base::sync_with_stdio(false);
    std::cout.setf(std::ios::unitbuf);
    bitboard::init();
    eval::init();

    std::string word;
    while (true) {
        std::cin >> word;
        if (word == "uci")
        {
            uci::init();
            break;
        }
        else
        {
            std::cout << "Unrecognized protocol!" << std::endl;
        }
    }
    return 0;
}
