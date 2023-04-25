#include "Canvas.hpp"

namespace gui
{
    void Canvas::setCurrentColor(sf::Color cur_color)
    {
        currentColor_ = cur_color;
    }

    void Canvas::respond2Click()
    {   
        sf::Vector2f clickPosition = locationToPosition(clickLocation_);
        //std::cout<<"begin responding to click"<<std::endl;
        currentStain_.setFillColor(currentColor_);
        currentStain_.setPosition(clickPosition - sf::Vector2f{currentStain_.getRadius(), currentStain_.getRadius()});
        // stains.push_back(new sf::CircleShape());
        window_ptr->draw(currentStain_);
        //std::cout<<"stain must be on the"<<" "<<clickPosition.x<<" "<<clickPosition.y<<std::endl;
    }

    void Canvas::draw()
    {
        //return;
        window_ptr->draw(area_);
        //std::cout<<1<<std::endl;
    }
}