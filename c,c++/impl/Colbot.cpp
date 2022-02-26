/**
 * @file Colbot.cpp
 * @author colson (dud3722000@naver.com)
 * @brief {This file for...}
 * @version 0.1
 * @date 2022-02-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "Colbot.h"

uint16_t Colbot::getProtocolVersion()
{
    return packetHandlerImpl->getVersion();
}

bool Colbot::reset()
{
    std::cout << "reset" << std::endl;
    auto packet = packetHandlerImpl->makeResetPacket();
    return serialHandlerImpl->write(packet);
}