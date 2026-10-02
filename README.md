# C Dynamic Buffer

A lightweight implementation of a dynamically growing character buffer in C using manual memory management and pointer-based state updates.

## Features

- Automatic capacity growth
- Dynamic allocation with `malloc` and `realloc`
- Manual memory cleanup with `free`
- Allocation error handling
- Pointer-based buffer management

## Build

```bash
clang main.c buffer.c -o buffer
