#!/bin/bash
rm -r build/*
cd build/
cmake ..
make
cd tests/
./WordsGeneratorTests