float3 aSat(float3 color, float amount){
    float grey = (color.r * .2125 + color.g * .7154 + color.b * .0721);
    grey = grey * (1.0 - amount);
    return float3 (grey,grey,grey) + color * amount;
    }
#define satGlobal 1.3