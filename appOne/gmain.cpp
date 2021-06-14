#include"libOne.h"
void gmain() {
    window(1000, 1000);
    while (notQuit) {
        //１次元ベクトル
        float vx = mathMouseX;
        float mag = vx < 0 ? -vx : vx; //0より小さかったら-vxではなかったらvx
        float nvx = vx / mag;
        //if (vx < 0) { mag = -vx; }
        //else { mag = vx; }
        //クリアして座標を描画
        clear(200);
        mathAxis(5.1f);
        //ベクトルを描画
        strokeWeight(10);
        stroke(0);
        mathArrow(0, 0, vx, 0);
        stroke(255, 0, 0);
        mathArrow(0, 0, nvx, 0);

        textSize(50);
        text(vx, 0, 50);
        text(mag, 0, 100);

    }
}
