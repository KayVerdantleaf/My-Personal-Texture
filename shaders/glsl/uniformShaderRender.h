#ifndef ESBE_UTIL_INCLUDED
#define ESBE_UTIL_INCLUDED

//=*=設定項目=*=
//草木の揺れ
#define LEAVES_WAVES
//水の波
#define WATER_WAVES
//光源
#define ESBE_LIGHT vec3(0.700,0.500,0.300)
//陰
#define ESBE_SHADOW vec3(0.0,0.0,0.0)
float blur = 0.005;//影の境界(数が大きいほどぼやける)
float in_fog = 0.25;//水中,ネザー,エンドでの明るさ(0に近づくほど明るく)
//夕焼け
#define DUSK float(0.2)//夕焼けの色の強さ
float dusk1 = 0.25;//境界位置
float dusk2 = 0.25;//境界ブラー
//トーンマップ
#define ESBE_TONEMAP
#define saturation 1.333//色の強さ
#define exposure 1.150//雨天時と晴天時の演出の差
#define brightness 0.550//全体的な明るさ
#define gamma 1.200//描写の「硬さ」
#define contrast 1.97//彩度
#define ESBE_WORLD_LIGHT
//=*=-*-=*=

#endif
