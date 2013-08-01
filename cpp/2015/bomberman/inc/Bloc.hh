//
// Bloc.hh for  in /home/fleuro_m//work/tmp
//
//
// Made by matthieu fleurot
// Login   <fleuro_m@epitech.net>
//
// Started on  Fri Jun  1 15:42:41 2012 matthieu fleurot
// Last update Sun Jun  3 23:09:13 2012 quentin pidoux
//

#ifndef		BLOC_HH
# define	BLOC_HH

#include "AObject.hh"
#include "MenuCamera.hh"
#include "Vector3f.hh"
#include "Map.hh"

namespace Bloc
{
  class ABloc: public AObject
  {
  public:
    virtual void	initialize() = 0;
    virtual void	draw() = 0;
    virtual void	update(gdl::GameClock const &, gdl::Input &);
    virtual void	draw_object(Vector3f *);

  protected:
    gdl::Model		_mymodel;
    gdl::Image		texture_;
    MenuCamera		camera_;

  private:
  };

  //--------------------BLOC--------------------

  class Wall : public ABloc
  {
  public:
    Wall(map::map &);
    ~Wall();
    //    void draw_object(Vector3f *position);
    virtual void	initialize();
    virtual void	draw();
  private:
    map::map		&_map;
  };

  class Box : public ABloc
  {
  public:
    Box(map::map &);
    ~Box();
    virtual void	initialize();
    virtual void	draw();
  private:
    map::map		&_map;
  };

  class Blank : public ABloc
  {
  public:
    Blank(map::map &);
    ~Blank();
    virtual void	initialize();
    virtual void	draw();
  private:
    map::map		&_map;
    bool done;
  };
  //--------------------BONUS--------------------
  class Morebomb : public ABloc
  {
  public:
    Morebomb(map::map &);
    ~Morebomb();
    virtual void	initialize();
    virtual void	draw();
  private:
    map::map		&_map;
  };

  class Lessbomb : public ABloc
  {
  public:
    Lessbomb(map::map &);
    ~Lessbomb();
    virtual void	initialize();
    virtual void	draw();
  private:
    map::map		&_map;
  };

  class Morepower : public ABloc
  {
  public:
    Morepower(map::map &);
    ~Morepower();
    virtual void	initialize();
    virtual void	draw();
  private:
    map::map		&_map;
  };

  class Lesspower : public ABloc
  {
  public:
    Lesspower(map::map &);
    ~Lesspower();
    virtual void	initialize();
    virtual void	draw();
  private:
    map::map		&_map;
  };

  class fire : public ABloc
  {
  public:
    fire(map::map &);
    ~fire();
    virtual void	initialize();
    virtual void	draw();
  private:
    map::map		&_map;
  };
};

#endif //!__BLOC__HH__