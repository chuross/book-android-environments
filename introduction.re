= はじめに
最近のAndroid開発は数年前に比べると大分開発しやすくなった。

公式でIDE(Android Studio)とビルドツール(Gradle)が提供されるようになった。
多くの作業が自動になったし、ビルドツールで面倒なビルドが簡単に設定できるようになった。

そのままでも十分開発できるが、Gradleのプラグインやライブラリを活用するとより便利になる。

今回はそういったプラグインやライブラリを紹介してより良い環境構築に繋げていきたい。

== 対象読者
今回の本は以下の読者を対象に書いている。

 * Androidによる開発経験がある
 * Android開発でよく出る用語をある程度理解できる
 ** 細かい用語に関して言及していない
 ** 何か知らない用語があれば検索しながら読む
 * Gradleを使ったことがある
 ** 依存ライブラリを記述するとかProguard設定する時に書いた程度でOK

== 筆者について
//image[1][著者][scale=0.3]

ちゅろっす / @chuross
