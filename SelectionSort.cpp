﻿// SelectionSort.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

int main()
{
    int boxes[10] = { 3, 6, 1, 2, 8, 5,12,20,17,14};
    int mIdx = 0;
    
    for (int i = 0; i < 10; i++) {
        cout << boxes[i] << ", ";
    }
    cout << endl;

    for (int i=0; i<9; i++) {
        mIdx = i; //暫定の最小値

        for (int j = i + 1; j < 10; j++) {
            if (boxes[j] < boxes[mIdx]) {
                mIdx = j;
            }
        }

        int m = boxes[mIdx];
        boxes[mIdx] = boxes[i];
        boxes[i] = m;
    }

    // 中身を表示
    for (int i = 0; i < 10; i++) {
        cout << boxes[i] << ", ";
    }
 }

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
