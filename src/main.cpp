#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(PlayerObject) {
    void pushButton(PlayerButton p0) {
        PlayerObject::pushButton(p0);
        // This is where your tapping logic goes
    }
};
