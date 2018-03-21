#ifndef DRAWMAP_H
#define DRAWMAP_H


class DrawMap
{
public:
    DrawMap();
    void PaintMap();
    void SetCursor(int x, int y);

private:
    const int width = 60;
    const int height = 30;
};

#endif // DRAWMAP_H
