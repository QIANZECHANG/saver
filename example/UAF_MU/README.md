# Patch
```
CONVERTING FAILS
```

# Infer
```
src.c:15: error: MEMORY_LEAK (biabduction/Abs.ml:1082:18-25:)
  memory dynamically allocated to `return` by call to `malloc()` at line 5, column 12 is not reachable after line 15, column 3.

src.c:6: error: NULL_DEREFERENCE (biabduction/Rearrange.ml:1643:57-64:)
  [B1] pointer `p` last assigned on line 5 could be null and is dereferenced at line 6, column 3.

src.c:10: error: USE_AFTER_FREE (biabduction/Rearrange.ml:1654:50-57:)
  [B3] pointer `p` last assigned on line 5 was freed by call to `free()` at line 13, column 7 and is dereferenced or freed at line 10, column 9.
```
