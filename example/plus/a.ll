; ModuleID = 'src.c'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

; Function Attrs: nounwind uwtable
define i32 @main(i32 %argc, i8** %argv) #0 {
  %1 = alloca i32, align 4
  %2 = alloca i32, align 4
  %3 = alloca i8**, align 8
  %p = alloca i32*, align 8
  %q = alloca i32*, align 8
  %i = alloca i32, align 4
  %j = alloca i32, align 4
  store i32 0, i32* %1, align 4
  store i32 %argc, i32* %2, align 4
  store i8** %argv, i8*** %3, align 8
  %4 = load i8**, i8*** %3, align 8
  %5 = getelementptr inbounds i8*, i8** %4, i64 1
  %6 = load i8*, i8** %5, align 8
  %7 = call i32 @atoi(i8* %6) #3
  store i32 %7, i32* %i, align 4
  %8 = load i8**, i8*** %3, align 8
  %9 = getelementptr inbounds i8*, i8** %8, i64 2
  %10 = load i8*, i8** %9, align 8
  %11 = call i32 @atoi(i8* %10) #3
  store i32 %11, i32* %j, align 4
  %12 = call noalias i8* @malloc(i64 1) #4
  %13 = bitcast i8* %12 to i32*
  store i32* %13, i32** %p, align 8
  %14 = load i32, i32* %i, align 4
  %15 = load i32, i32* %j, align 4
  %16 = add nsw i32 %14, %15
  %17 = icmp slt i32 %16, 5
  br i1 %17, label %18, label %20

; <label>:18                                      ; preds = %0
  %19 = load i32*, i32** %p, align 8
  store i32* %19, i32** %q, align 8
  br label %23

; <label>:20                                      ; preds = %0
  %21 = call noalias i8* @malloc(i64 2) #4
  %22 = bitcast i8* %21 to i32*
  store i32* %22, i32** %q, align 8
  br label %23

; <label>:23                                      ; preds = %20, %18
  %24 = load i32*, i32** %q, align 8
  store i32 1, i32* %24, align 4
  %25 = load i32*, i32** %q, align 8
  %26 = bitcast i32* %25 to i8*
  call void @free(i8* %26) #4
  ret i32 0
}

; Function Attrs: nounwind readonly
declare i32 @atoi(i8*) #1

; Function Attrs: nounwind
declare noalias i8* @malloc(i64) #2

; Function Attrs: nounwind
declare void @free(i8*) #2

attributes #0 = { nounwind uwtable "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readonly "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { nounwind "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { nounwind readonly }
attributes #4 = { nounwind }

!llvm.ident = !{!0}

!0 = !{!"clang version 3.8.0-2ubuntu4 (tags/RELEASE_380/final)"}
