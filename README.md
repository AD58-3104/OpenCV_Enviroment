# OpenCV_Enviroment
OpenCVをただ使いたい人のためのやつです

## 利用方法
1. main.cppにプログラムを書く
2. mkdir build  でbuildディレクトリをこのディレクトリ内に作る
3. cd build でbuild ディレクトリの中に入る
4. cmake ..   をする
5. make -j8     でビルド出来る。  
一度buildディレクトリを作って、cmake .. をしたらそれ以降はbuild ディレクトリの中でmake -j8をすればコンパイル出来る。