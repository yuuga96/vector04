#include"libOne.h"
void gmain() {
    window(1000, 1000);
    while (notQuit) {
        //�P�����x�N�g��
        float vx = mathMouseX;
        float mag = vx < 0 ? -vx : vx; //0��菬����������-vx�ł͂Ȃ�������vx
        float nvx = vx / mag;
        //if (vx < 0) { mag = -vx; }
        //else { mag = vx; }
        //�N���A���č��W��`��
        clear(200);
        mathAxis(5.1f);
        //�x�N�g����`��
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
