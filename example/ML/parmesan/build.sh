#!/bin/bash

USE_FAST=1 ~/parmesan/bin/angora-clang -emit-llvm -o test.fast.bc -c test.bc
USE_FAST=1 ~/parmesan/bin/angora-clang -fsanitize=address -emit-llvm -o test.fast.asan.bc -c test.bc
USE_FAST=1 ~/parmesan/bin/angora-clang -o test.fast -c test.bc
USE_TRACK=1 ~/parmesan/bin/angora-clang -o test.track -c test.bc

~/parmesan/bin/llvm-diff-parmesan -json test.fast.bc test.fast.asan.bc

