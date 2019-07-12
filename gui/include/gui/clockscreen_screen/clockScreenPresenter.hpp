#ifndef CLOCKSCREEN_PRESENTER_HPP
#define CLOCKSCREEN_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class clockScreenView;

class clockScreenPresenter : public Presenter, public ModelListener
{
public:
    clockScreenPresenter(clockScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~clockScreenPresenter() {};

private:
    clockScreenPresenter();

    clockScreenView& view;
};


#endif // CLOCKSCREEN_PRESENTER_HPP