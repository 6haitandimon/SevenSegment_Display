//// Created by Dzmitryj Bareika on 19.11.24.//#ifndef SEVENSEGMEN_DISPLAY_VIRTUALTIMER_H#define SEVENSEGMEN_DISPLAY_VIRTUALTIMER_H#include "BaseTimer.h"#include <functional>class VirtualTimer{private:  uint32_t duration;  uint32_t remaining;  bool active;  bool isCyclic;  void (*callback)();public:  VirtualTimer();  void start(uint32_t duration_ms, bool cyclic, void (*callback)());  void stop();  void tick();  bool isActive() const;};#endif // SEVENSEGMEN_DISPLAY_VIRTUALTIMER_H