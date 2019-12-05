/////////////////////////////////////////////////////////////////////////
///@file config.h
///@brief	配置文件读写
///@copyright	上海信易信息科技股份有限公司 版权所有 
/////////////////////////////////////////////////////////////////////////

#pragma once

#include "types.h"
#include "condition_order_type.h"

#include <string>
#include <vector>
#include <map>

struct Config
{
    Config();

    //服务IP及端口号
    std::string host;

    int port;

    //user配置
    std::string user_file_path;

    //是否要求用户确认结算单
    bool auto_confirm_settlement;

    //broker配置
    std::map<std::string, BrokerConfig> brokers;

    std::string broker_list_str;

    //当前交易日
    std::string trading_day;
};

extern Config g_config;

extern condition_order_config g_condition_order_config;

bool LoadConfig();
