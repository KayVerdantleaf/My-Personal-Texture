vec3 aSat(vec3 color, float amount){
    float grey = (color.r * .2125 + color.g * .7154 + color.b * .0721);
    return grey * (1.0 - amount) + color * amount;
    }
float satGlobal = 1.3;