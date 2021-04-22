# Download SAVER

```
https://github.com/kupl/SAVER_public
```

# Run infer

```
  infer -g run --clang *.c
```

# Run SAVER

```
  infer saver --error-report (report).json
```

# SAVER Fix Strategy
* ML
 * add free
 * move free
* DF
 * delete free
* UAF 
 * move free
 * move use
