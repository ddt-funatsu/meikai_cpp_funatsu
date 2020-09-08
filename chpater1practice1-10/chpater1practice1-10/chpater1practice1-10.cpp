﻿/*
	関数名　	main
	問題　		キーボードから読み込んだ整数値に１０を加えた値と１０を減じた値を出力するプログラムを作成せよ。
	関数概要	int型ローカル変数を1つ定義し、その後、ユーザーの入力した整数を格納した後、１０を加えたものと減じたものを計算しコンソール画面に同変数を表示する
	引数		なし
	戻り値		なし
	作成者　	船津　優斗
	作成日		2020/9/8
*/

/*
結果
	コンパイル、実行ともに成功する。
考察
	あらかじめ入力する型が決まっているのならこの処理で問題ない。
	しかし、ユーザーが整数以外を入力する場合に備えて代入用変数はdoubleにしてその値が整数であったら別名int型へ代入して表示、実数を入力したらエラー表示する処理が現実的には必要と思われる。
*/

// 標準ライブラリ読み込みの為にヘッダをインクルード
#include<iostream>

// 使用する名前空間を指定
using namespace std;

// プログラムのエントリポイント
int main() {

	//////////////////////////////定数定義/////////////////////////////

	// 和と減算で用いる数値を定義
	const int OPERATION_INTEGER = 10;

	////////////////////////ローカル変数定義///////////////////////////

	// ユーザーの入力整数値を格納する変数を宣言
	int userInputDataInteger;	// ユーザーの入力整数値を格納
	int resultAdded;			// ユーザー入力値に１０加えた計算結果を格納
	int resultSubtracted;		// ユーザーの入力値から１０引いた計算結果を格納

	///////////////////////////////処理////////////////////////////////

	// ユーザーに整数値入力を促す文字を表示
	cout << "整数値：";

	// ユーザー入力をローカル変数へ格納
	cin >> userInputDataInteger;

	// ユーザー入力に１０加えた値を計算
	resultAdded = userInputDataInteger + OPERATION_INTEGER;

	// ユーザー入力から１０引いた値を計算
	resultSubtracted = userInputDataInteger - OPERATION_INTEGER;

	// ユーザー入力整数を画面表示
	cout << userInputDataInteger << "と入力しましたね。\n";

	// ユーザー入力に10加えたものを画面へ表示
	cout << "10を加えた値は" << resultAdded << "です。\n";

	// ユーザー入力に10減算したものを画面へ表示
	cout << "10を減じた値は" << resultSubtracted << "です。\n";

}