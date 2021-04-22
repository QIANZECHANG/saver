# Patch

```
 { Insert: if (true) free(*(main:p)) at 9 (line 9, column 7) }
```

# Infer

```
 src.c:12: error: MEMORY_LEAK (biabduction/Abs.ml:1082:18-25:)
  memory dynamically allocated by call to `malloc()` at line 8, column 7 is not reachable after line 12, column 9.
```
