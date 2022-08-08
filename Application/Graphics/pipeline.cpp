//This script defenetly will work out of sync from GameLogic,
//so game logic must provide just the data to draw.

//So when for example GPU will fail (DEVICE_HUNG/DEVICE_REMOVED),
//the engine will may recover(or switch to software rendering)
//instead of crashing right away(like does Unity and UE).