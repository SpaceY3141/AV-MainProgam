#include "eventManager.h"

/* Structure de la fifo
  [[alt1, accX1, accY1, accZ1],
  [alt2, accX2, accY2, accZ2],
  [alt3, accX3, accY3, accZ3],
  ...]
*/

EventManager::EventManager() : triggered(false) {}

bool EventManager::isLiftOff(std::queue<std::vector<double>> fifo){

}

bool EventManager::isApogee(std::queue<std::vector<double>> fifo){

}

bool EventManager::isReTrigger(double alt){

}

bool EventManager::isTouchDown(std::queue<std::vector<double>> fifo){

}

bool EventManager::trigger(){
    //TODO allume l'e-match
    triggered = true;
}

bool EventManager::hasTriggered(){
    return triggered;
}