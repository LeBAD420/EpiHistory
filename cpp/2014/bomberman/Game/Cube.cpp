#include <vector>
#include <utility>

#include "bomberlib.hh"
#include "Object.hh"

namespace Object
{
  Cube::Cube(float sizeX, float sizeY, float sizeZ)
  {
    this->sizeX = sizeX;
    this->sizeY = sizeY;
    this->sizeZ = sizeZ;
  }

  void Cube::initialize(void)
  {}

  void Cube::update(gdl::GameClock const & gameClock, gdl::Input & input)
  {}

  void Cube::draw_object(Vector3f *position)
  {
    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex3f(position->x, this->sizeZ, position->y + this->sizeY);
    glVertex3f(position->x, 0.0f, position->y + this->sizeY);
    glVertex3f(position->x + this->sizeX, 0.0f, position->y + this->sizeY);
    glVertex3f(position->x + this->sizeX, this->sizeZ, position->y + this->sizeY);

    glColor3f(0.0f, 0.0f, 1.0f);

    glVertex3f(position->x, this->sizeZ, position->y + this->sizeY);
    glVertex3f(position->x, 0.0f, position->y + this->sizeY);
    glVertex3f(position->x, 0.0f, position->y);
    glVertex3f(position->x, this->sizeZ, position->y);

    glColor3f(0.0f, 1.0f, 1.0f);

    glVertex3f(position->x + this->sizeX, this->sizeZ, position->y);
    glVertex3f(position->x + this->sizeX, 0.0f, position->y);
    glVertex3f(position->x, 0.0f, position->y);
    glVertex3f(position->x, this->sizeZ, position->y);

    glColor3f(0.0f, 1.0f, 0.0f);

    glVertex3f(position->x + this->sizeX, this->sizeZ, position->y + this->sizeY);
    glVertex3f(position->x + this->sizeX, 0.0f, position->y + this->sizeY);
    glVertex3f(position->x + this->sizeX, 0.0f, position->y);
    glVertex3f(position->x + this->sizeX, this->sizeZ, position->y);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex3f(position->x + this->sizeX, this->sizeZ, position->y + this->sizeY);
    glVertex3f(position->x, this->sizeZ, position->y + this->sizeY);
    glVertex3f(position->x, this->sizeZ, position->y);
    glVertex3f(position->x + this->sizeX, this->sizeZ, position->y);

    glEnd();
  }

  void Cube::draw(void)
  {
    std::vector<std::pair<Vector3f*, float> >::iterator it;
    int	i = 0;

    for (it = this->positions.begin() ; it != this->positions.end() ; it++)
      this->draw_object(this->positions[i++].first);
  }
}