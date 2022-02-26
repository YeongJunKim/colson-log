/**
 * @file ColBot.h
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 
#ifndef __COLBOT__
#define __COLBOT__

#include <iostream>
#include <PacketHandler.h>
#include <Serial.h>
#include <memory>

class PacketHandler;

class Colbot
{
    public:
        Colbot(PacketHandler packetHandler, SerialHandler serialHandler) {
            packetHandlerImpl = std::make_unique<PacketHandler>(packetHandler);

        }
        ~Colbot() = default;
    public:
        uint16_t getProtocolVersion();
        bool reset();
        

    private:
        std::unique_ptr<PacketHandler> packetHandlerImpl;
        std::unique_ptr<SerialHandler> serialHandlerImpl;
};

#endif /* __COLBOT__ */
