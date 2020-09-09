﻿/*
	関数名　	main
	問題　		ユーザーから整数型のデータを受け取り、それがプラス、マイナス、０かによって入力変数
				がどの状態であるかを表示するプログラムの最後の負を判定するif文に対応するelseをelse if (n == 0)
				に変更するとどうなるかを検証せよ
	関数概要	int型でユーザーから整数を受け取りその値の符号がプラスかマイナスか０かを判定し結果を表示する関数。
	引数		なし
	戻り値		なし
	作成者　	船津　優斗
	作成日		2020/9/9
*/

/*
結果
	コンパイル、実行ともに成功する。ユーザー入力値が整数（intが格納できる範囲の）なら正しく機能する。
考察
	もし関数の目的を果たしたいだけなら最後のelseは現在のif文の入れ子なら必要ない条件判定なのではないかと思われる。論理的にこの場合elseであっても正しく機能すると考えられる。
*/

// 標準ライブラリ読み込みの為にヘッダをインクルード
#include<iostream>

// 使用する名前空間を指定
using namespace std;

// プログラムのエントリポイント
int main() {


	////////////////////////ローカル変数定義///////////////////////////

	// ユーザーの入力整数値を格納する変数を宣言
	int userInpuInteger;				// ユーザーの入力整数値を格納

	///////////////////////////////処理////////////////////////////////


	// ユーザーに整数値を入力するように告知
	cout << "整数値：";


	// ユーザー入力をローカル変数へ格納
	cin >> userInpuInteger;

	// ユーザー入力値が正であるかを判定
	if ( userInpuInteger > 0 ) {

		// 入力した整数が正である事を画面に出力してユーザーに告知する
		cout << "その値は正です。\n";

	}
	else if ( userInpuInteger < 0 ) {

		//　ユーザー入力値が負である場合

		// 入力した整数が負である事を画面に出力してユーザーに告知する
		cout << "その値は負です。\n";

	}
	else if ( userInpuInteger == 0 ) {

		//　ユーザー入力値が０である場合

		// 入力した整数が０である事を画面に出力してユーザーに告知する
		cout << "その値は０です。\n";
	}


}