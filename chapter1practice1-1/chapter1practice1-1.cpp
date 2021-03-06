﻿//////////////////////////////////////////////////////////////////////
//																	//
//	関数名　main													//
//	問題	ヘッダ<iostream>をインクルードする指令が欠如していると、//
//			どうなるであろうか。プログラムをコンパイルして検証せよ。//			
//	関数概要	:コンソール画面に『はじめてのｃ＋＋プログラム』と	//
//				『画面に出力しています。』をそれぞれ改行してコンソー//
//				 ル画面へ出力する。									//
//	引数　		:なし												//
//	戻り値		:なし												//
//	作成者		:船津　優斗											//
//	作成日		:2020/7/27											//
//																	//
//////////////////////////////////////////////////////////////////////

/*

インクルードファイルをコメントアウトしてコンパイルを試みると以下のコンパイルエラーが発生する

	１、namespace"std"にメンバー"cout"がありません。
	２、cout定義されていない識別子です。
	３、'cout':'std'のメンバーではありません。

この原因はcoutで必要となるコンソール画面出力の為のライブラリが読み込む事ができないためである。

*/


//ヘッダインクルード　演習ではこのヘッダをコメントアウトしている
#include<iostream>

//使用する名前空間を指定する
using namespace std;

//プログラムのエントリーポイント
int main() {

	//画面にハローワールドと表示する
	std::cout << "初めてのｃ＋＋プログラム\n";

	//画面に続きの文字列を表示する
	std::cout << "画面に出力しています。\n";
}
