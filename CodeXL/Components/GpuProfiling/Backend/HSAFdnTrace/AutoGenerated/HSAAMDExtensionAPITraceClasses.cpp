//==============================================================================
// Copyright (c) 2015-2016 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief THIS CODE WAS AUTOGENERATED BY PASSTHROUGHGENERATOR ON 06/13/16
//==============================================================================

#include "HSATraceStringOutput.h"

#include "HSAAMDExtensionAPITraceClasses.h"

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_coherency_get_type
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_coherency_get_type::HSA_APITrace_hsa_amd_coherency_get_type()
{
}

HSA_APITrace_hsa_amd_coherency_get_type::~HSA_APITrace_hsa_amd_coherency_get_type()
{
}

std::string HSA_APITrace_hsa_amd_coherency_get_type::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_coherency_get_type::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_coherency_type_t_Ptr_String(m_type_, m_type_Val);
    return ss.str();
}

void HSA_APITrace_hsa_amd_coherency_get_type::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_amd_coherency_type_t* type_,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_coherency_get_type;
    m_agent = agent;
    m_type_ = type_;

    if (nullptr != m_type_)
    {
        m_type_Val = *m_type_;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_coherency_set_type
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_coherency_set_type::HSA_APITrace_hsa_amd_coherency_set_type()
{
}

HSA_APITrace_hsa_amd_coherency_set_type::~HSA_APITrace_hsa_amd_coherency_set_type()
{
}

std::string HSA_APITrace_hsa_amd_coherency_set_type::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_coherency_set_type::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_coherency_type_t_String(m_type_);
    return ss.str();
}

void HSA_APITrace_hsa_amd_coherency_set_type::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_amd_coherency_type_t type_,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_coherency_set_type;
    m_agent = agent;
    m_type_ = type_;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_profiling_set_profiler_enabled
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_profiling_set_profiler_enabled::HSA_APITrace_hsa_amd_profiling_set_profiler_enabled()
{
}

HSA_APITrace_hsa_amd_profiling_set_profiler_enabled::~HSA_APITrace_hsa_amd_profiling_set_profiler_enabled()
{
}

std::string HSA_APITrace_hsa_amd_profiling_set_profiler_enabled::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_profiling_set_profiler_enabled::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_queue_t_Ptr_String(m_queue, m_queueVal) << s_strParamSeparator;
    ss << StringUtils::ToString(m_enable);
    return ss.str();
}

void HSA_APITrace_hsa_amd_profiling_set_profiler_enabled::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_queue_t* queue,
    int enable,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_profiling_set_profiler_enabled;
    m_queue = queue;

    if (nullptr != m_queue)
    {
        m_queueVal = *m_queue;
    }

    m_enable = enable;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_profiling_async_copy_enable
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_profiling_async_copy_enable::HSA_APITrace_hsa_amd_profiling_async_copy_enable()
{
}

HSA_APITrace_hsa_amd_profiling_async_copy_enable::~HSA_APITrace_hsa_amd_profiling_async_copy_enable()
{
}

std::string HSA_APITrace_hsa_amd_profiling_async_copy_enable::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_profiling_async_copy_enable::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_enable);
    return ss.str();
}

void HSA_APITrace_hsa_amd_profiling_async_copy_enable::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    bool enable,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_profiling_async_copy_enable;
    m_enable = enable;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_profiling_get_dispatch_time
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_profiling_get_dispatch_time::HSA_APITrace_hsa_amd_profiling_get_dispatch_time()
{
}

HSA_APITrace_hsa_amd_profiling_get_dispatch_time::~HSA_APITrace_hsa_amd_profiling_get_dispatch_time()
{
}

std::string HSA_APITrace_hsa_amd_profiling_get_dispatch_time::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_profiling_get_dispatch_time::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_signal_t_String(m_signal) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_profiling_dispatch_time_t_Ptr_String(m_time, m_timeVal);
    return ss.str();
}

void HSA_APITrace_hsa_amd_profiling_get_dispatch_time::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_signal_t signal,
    hsa_amd_profiling_dispatch_time_t* time,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_profiling_get_dispatch_time;
    m_agent = agent;
    m_signal = signal;
    m_time = time;

    if (nullptr != m_time)
    {
        m_timeVal = *m_time;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_profiling_get_async_copy_time
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_profiling_get_async_copy_time::HSA_APITrace_hsa_amd_profiling_get_async_copy_time()
{
}

HSA_APITrace_hsa_amd_profiling_get_async_copy_time::~HSA_APITrace_hsa_amd_profiling_get_async_copy_time()
{
}

std::string HSA_APITrace_hsa_amd_profiling_get_async_copy_time::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_profiling_get_async_copy_time::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_signal_t_String(m_signal) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_profiling_async_copy_time_t_Ptr_String(m_time, m_timeVal);
    return ss.str();
}

void HSA_APITrace_hsa_amd_profiling_get_async_copy_time::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_signal_t signal,
    hsa_amd_profiling_async_copy_time_t* time,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_profiling_get_async_copy_time;
    m_signal = signal;
    m_time = time;

    if (nullptr != m_time)
    {
        m_timeVal = *m_time;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_profiling_convert_tick_to_system_domain
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_profiling_convert_tick_to_system_domain::HSA_APITrace_hsa_amd_profiling_convert_tick_to_system_domain()
{
}

HSA_APITrace_hsa_amd_profiling_convert_tick_to_system_domain::~HSA_APITrace_hsa_amd_profiling_convert_tick_to_system_domain()
{
}

std::string HSA_APITrace_hsa_amd_profiling_convert_tick_to_system_domain::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_profiling_convert_tick_to_system_domain::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << StringUtils::ToString(m_agent_tick) << s_strParamSeparator;
    ss << StringUtils::ToStringPtr(m_system_tick, m_system_tickVal);
    return ss.str();
}

void HSA_APITrace_hsa_amd_profiling_convert_tick_to_system_domain::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    uint64_t agent_tick,
    uint64_t* system_tick,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_profiling_convert_tick_to_system_domain;
    m_agent = agent;
    m_agent_tick = agent_tick;
    m_system_tick = system_tick;

    if (nullptr != m_system_tick)
    {
        m_system_tickVal = *m_system_tick;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_signal_async_handler
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_signal_async_handler::HSA_APITrace_hsa_amd_signal_async_handler()
{
}

HSA_APITrace_hsa_amd_signal_async_handler::~HSA_APITrace_hsa_amd_signal_async_handler()
{
}

std::string HSA_APITrace_hsa_amd_signal_async_handler::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_signal_async_handler::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_signal_t_String(m_signal) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_signal_condition_t_String(m_cond) << s_strParamSeparator;
    ss << StringUtils::ToString(m_value) << s_strParamSeparator;
    ss << StringUtils::ToString(m_handler) << s_strParamSeparator;
    ss << StringUtils::ToString(m_arg);
    return ss.str();
}

void HSA_APITrace_hsa_amd_signal_async_handler::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_signal_t signal,
    hsa_signal_condition_t cond,
    hsa_signal_value_t value,
    hsa_amd_signal_handler handler,
    void* arg,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_signal_async_handler;
    m_signal = signal;
    m_cond = cond;
    m_value = value;
    m_handler = handler;
    m_arg = arg;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_async_function
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_async_function::HSA_APITrace_hsa_amd_async_function()
{
}

HSA_APITrace_hsa_amd_async_function::~HSA_APITrace_hsa_amd_async_function()
{
}

std::string HSA_APITrace_hsa_amd_async_function::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_async_function::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(reinterpret_cast<void*>(m_callback)) << s_strParamSeparator;
    ss << StringUtils::ToString(m_arg);
    return ss.str();
}

void HSA_APITrace_hsa_amd_async_function::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    void (*callback)(void* arg),
    void* arg,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_async_function;
    m_callback = callback;
    m_arg = arg;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_signal_wait_any
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_signal_wait_any::HSA_APITrace_hsa_amd_signal_wait_any()
{
}

HSA_APITrace_hsa_amd_signal_wait_any::~HSA_APITrace_hsa_amd_signal_wait_any()
{
}

std::string HSA_APITrace_hsa_amd_signal_wait_any::GetRetString()
{
    return StringUtils::ToString(m_retVal);
}

std::string HSA_APITrace_hsa_amd_signal_wait_any::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_signal_count) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_signal_t_Ptr_String(m_signals, m_signalsVal) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_signal_condition_t_Ptr_String(m_conds, m_condsVal) << s_strParamSeparator;
    ss << StringUtils::ToStringPtr(m_values, m_valuesVal) << s_strParamSeparator;
    ss << StringUtils::ToString(m_timeout_hint) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_wait_state_t_String(m_wait_hint) << s_strParamSeparator;
    ss << StringUtils::ToStringPtr(m_satisfying_value, m_satisfying_valueVal);
    return ss.str();
}

void HSA_APITrace_hsa_amd_signal_wait_any::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    uint32_t signal_count,
    hsa_signal_t* signals,
    hsa_signal_condition_t* conds,
    hsa_signal_value_t* values,
    uint64_t timeout_hint,
    hsa_wait_state_t wait_hint,
    hsa_signal_value_t* satisfying_value,
    uint32_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_signal_wait_any;
    m_signal_count = signal_count;
    m_signals = signals;

    if (nullptr != m_signals)
    {
        m_signalsVal = *m_signals;
    }

    m_conds = conds;

    if (nullptr != m_conds)
    {
        m_condsVal = *m_conds;
    }

    m_values = values;

    if (nullptr != m_values)
    {
        m_valuesVal = *m_values;
    }

    m_timeout_hint = timeout_hint;
    m_wait_hint = wait_hint;
    m_satisfying_value = satisfying_value;

    if (nullptr != m_satisfying_value)
    {
        m_satisfying_valueVal = *m_satisfying_value;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_queue_cu_set_mask
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_queue_cu_set_mask::HSA_APITrace_hsa_amd_queue_cu_set_mask()
{
}

HSA_APITrace_hsa_amd_queue_cu_set_mask::~HSA_APITrace_hsa_amd_queue_cu_set_mask()
{
}

std::string HSA_APITrace_hsa_amd_queue_cu_set_mask::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_queue_cu_set_mask::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_queue_t_Ptr_String(m_queue, m_queueVal) << s_strParamSeparator;
    ss << StringUtils::ToString(m_num_cu_mask_count) << s_strParamSeparator;
    ss << StringUtils::ToStringPtr(m_cu_mask, m_cu_maskVal);
    return ss.str();
}

void HSA_APITrace_hsa_amd_queue_cu_set_mask::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    const hsa_queue_t* queue,
    uint32_t num_cu_mask_count,
    const uint32_t* cu_mask,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_queue_cu_set_mask;
    m_queue = queue;

    if (nullptr != m_queue)
    {
        m_queueVal = *m_queue;
    }

    m_num_cu_mask_count = num_cu_mask_count;
    m_cu_mask = cu_mask;

    if (nullptr != m_cu_mask)
    {
        m_cu_maskVal = *m_cu_mask;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_memory_pool_get_info
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_memory_pool_get_info::HSA_APITrace_hsa_amd_memory_pool_get_info() : m_value(nullptr)
{
}

HSA_APITrace_hsa_amd_memory_pool_get_info::~HSA_APITrace_hsa_amd_memory_pool_get_info()
{
    if (nullptr != m_value)
    {
        FreeBuffer(m_value);
    }
}

std::string HSA_APITrace_hsa_amd_memory_pool_get_info::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_memory_pool_get_info::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_amd_memory_pool_t_String(m_memory_pool) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_memory_pool_info_t_String(m_attribute) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_memory_pool_get_info_AttributeString(m_value, m_attribute, m_retVal);
    return ss.str();
}

void HSA_APITrace_hsa_amd_memory_pool_get_info::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_amd_memory_pool_t memory_pool,
    hsa_amd_memory_pool_info_t attribute,
    void* value,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_memory_pool_get_info;
    m_memory_pool = memory_pool;
    m_attribute = attribute;

    if (nullptr != value)
    {
        DeepCopyBuffer(&m_value, value, HSATraceStringUtils::Get_hsa_amd_memory_pool_get_info_AttributeSize(m_attribute));
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_agent_iterate_memory_pools
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_agent_iterate_memory_pools::HSA_APITrace_hsa_amd_agent_iterate_memory_pools()
{
}

HSA_APITrace_hsa_amd_agent_iterate_memory_pools::~HSA_APITrace_hsa_amd_agent_iterate_memory_pools()
{
}

std::string HSA_APITrace_hsa_amd_agent_iterate_memory_pools::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_agent_iterate_memory_pools::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << StringUtils::ToString(reinterpret_cast<void*>(m_callback)) << s_strParamSeparator;
    ss << StringUtils::ToString(m_data);
    return ss.str();
}

void HSA_APITrace_hsa_amd_agent_iterate_memory_pools::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_status_t (*callback)(hsa_amd_memory_pool_t memory_pool, void* data),
    void* data,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_agent_iterate_memory_pools;
    m_agent = agent;
    m_callback = callback;
    m_data = data;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_memory_pool_allocate
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_memory_pool_allocate::HSA_APITrace_hsa_amd_memory_pool_allocate()
{
}

HSA_APITrace_hsa_amd_memory_pool_allocate::~HSA_APITrace_hsa_amd_memory_pool_allocate()
{
}

std::string HSA_APITrace_hsa_amd_memory_pool_allocate::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_memory_pool_allocate::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_amd_memory_pool_t_String(m_memory_pool) << s_strParamSeparator;
    ss << StringUtils::ToString(m_size) << s_strParamSeparator;
    ss << StringUtils::ToString(m_flags) << s_strParamSeparator;
    ss << StringUtils::ToString(m_ptr);
    return ss.str();
}

void HSA_APITrace_hsa_amd_memory_pool_allocate::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_amd_memory_pool_t memory_pool,
    size_t size,
    uint32_t flags,
    void** ptr,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_memory_pool_allocate;
    m_memory_pool = memory_pool;
    m_size = size;
    m_flags = flags;
    m_ptr = ptr;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_memory_pool_free
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_memory_pool_free::HSA_APITrace_hsa_amd_memory_pool_free()
{
}

HSA_APITrace_hsa_amd_memory_pool_free::~HSA_APITrace_hsa_amd_memory_pool_free()
{
}

std::string HSA_APITrace_hsa_amd_memory_pool_free::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_memory_pool_free::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_ptr);
    return ss.str();
}

void HSA_APITrace_hsa_amd_memory_pool_free::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    void* ptr,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_memory_pool_free;
    m_ptr = ptr;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_memory_async_copy
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_memory_async_copy::HSA_APITrace_hsa_amd_memory_async_copy()
{
}

HSA_APITrace_hsa_amd_memory_async_copy::~HSA_APITrace_hsa_amd_memory_async_copy()
{
}

std::string HSA_APITrace_hsa_amd_memory_async_copy::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_memory_async_copy::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_dst) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_agent_t_String(m_dst_agent) << s_strParamSeparator;
    ss << StringUtils::ToString(m_src) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_agent_t_String(m_src_agent) << s_strParamSeparator;
    ss << StringUtils::ToString(m_size) << s_strParamSeparator;
    ss << StringUtils::ToString(m_num_dep_signals) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_signal_t_Ptr_String(m_dep_signals, m_dep_signalsVal) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_signal_t_String(m_completion_signal);
    return ss.str();
}

void HSA_APITrace_hsa_amd_memory_async_copy::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    void* dst,
    hsa_agent_t dst_agent,
    const void* src,
    hsa_agent_t src_agent,
    size_t size,
    uint32_t num_dep_signals,
    const hsa_signal_t* dep_signals,
    hsa_signal_t completion_signal,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_memory_async_copy;
    m_dst = dst;
    m_dst_agent = dst_agent;
    m_src = src;
    m_src_agent = src_agent;
    m_size = size;
    m_num_dep_signals = num_dep_signals;
    m_dep_signals = dep_signals;

    if (nullptr != m_dep_signals)
    {
        m_dep_signalsVal = *m_dep_signals;
    }

    m_completion_signal = completion_signal;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_agent_memory_pool_get_info
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_agent_memory_pool_get_info::HSA_APITrace_hsa_amd_agent_memory_pool_get_info() : m_value(nullptr)
{
}

HSA_APITrace_hsa_amd_agent_memory_pool_get_info::~HSA_APITrace_hsa_amd_agent_memory_pool_get_info()
{
    if (nullptr != m_value)
    {
        FreeBuffer(m_value);
    }
}

std::string HSA_APITrace_hsa_amd_agent_memory_pool_get_info::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_agent_memory_pool_get_info::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_agent_t_String(m_agent) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_memory_pool_t_String(m_memory_pool) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_agent_memory_pool_info_t_String(m_attribute) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_agent_memory_pool_get_info_AttributeString(m_value, m_attribute, m_retVal);
    return ss.str();
}

void HSA_APITrace_hsa_amd_agent_memory_pool_get_info::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_agent_t agent,
    hsa_amd_memory_pool_t memory_pool,
    hsa_amd_agent_memory_pool_info_t attribute,
    void* value,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_agent_memory_pool_get_info;
    m_agent = agent;
    m_memory_pool = memory_pool;
    m_attribute = attribute;

    if (nullptr != value)
    {
        DeepCopyBuffer(&m_value, value, HSATraceStringUtils::Get_hsa_amd_agent_memory_pool_get_info_AttributeSize(m_attribute));
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_agents_allow_access
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_agents_allow_access::HSA_APITrace_hsa_amd_agents_allow_access()
{
}

HSA_APITrace_hsa_amd_agents_allow_access::~HSA_APITrace_hsa_amd_agents_allow_access()
{
}

std::string HSA_APITrace_hsa_amd_agents_allow_access::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_agents_allow_access::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_num_agents) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_agent_t_Ptr_String(m_agents, m_agentsVal) << s_strParamSeparator;
    ss << StringUtils::ToStringPtr(m_flags, m_flagsVal) << s_strParamSeparator;
    ss << StringUtils::ToString(m_ptr);
    return ss.str();
}

void HSA_APITrace_hsa_amd_agents_allow_access::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    uint32_t num_agents,
    const hsa_agent_t* agents,
    const uint32_t* flags,
    const void* ptr,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_agents_allow_access;
    m_num_agents = num_agents;
    m_agents = agents;

    if (nullptr != m_agents)
    {
        m_agentsVal = *m_agents;
    }

    m_flags = flags;

    if (nullptr != m_flags)
    {
        m_flagsVal = *m_flags;
    }

    m_ptr = ptr;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_memory_pool_can_migrate
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_memory_pool_can_migrate::HSA_APITrace_hsa_amd_memory_pool_can_migrate()
{
}

HSA_APITrace_hsa_amd_memory_pool_can_migrate::~HSA_APITrace_hsa_amd_memory_pool_can_migrate()
{
}

std::string HSA_APITrace_hsa_amd_memory_pool_can_migrate::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_memory_pool_can_migrate::ToString()
{
    std::ostringstream ss;
    ss << HSATraceStringUtils::Get_hsa_amd_memory_pool_t_String(m_src_memory_pool) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_memory_pool_t_String(m_dst_memory_pool) << s_strParamSeparator;
    ss << StringUtils::ToStringPtr(m_result, m_resultVal);
    return ss.str();
}

void HSA_APITrace_hsa_amd_memory_pool_can_migrate::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    hsa_amd_memory_pool_t src_memory_pool,
    hsa_amd_memory_pool_t dst_memory_pool,
    bool* result,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_memory_pool_can_migrate;
    m_src_memory_pool = src_memory_pool;
    m_dst_memory_pool = dst_memory_pool;
    m_result = result;

    if (nullptr != m_result)
    {
        m_resultVal = *m_result;
    }

    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_memory_migrate
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_memory_migrate::HSA_APITrace_hsa_amd_memory_migrate()
{
}

HSA_APITrace_hsa_amd_memory_migrate::~HSA_APITrace_hsa_amd_memory_migrate()
{
}

std::string HSA_APITrace_hsa_amd_memory_migrate::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_memory_migrate::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_ptr) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_amd_memory_pool_t_String(m_memory_pool) << s_strParamSeparator;
    ss << StringUtils::ToString(m_flags);
    return ss.str();
}

void HSA_APITrace_hsa_amd_memory_migrate::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    const void* ptr,
    hsa_amd_memory_pool_t memory_pool,
    uint32_t flags,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_memory_migrate;
    m_ptr = ptr;
    m_memory_pool = memory_pool;
    m_flags = flags;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_memory_lock
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_memory_lock::HSA_APITrace_hsa_amd_memory_lock()
{
}

HSA_APITrace_hsa_amd_memory_lock::~HSA_APITrace_hsa_amd_memory_lock()
{
}

std::string HSA_APITrace_hsa_amd_memory_lock::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_memory_lock::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_host_ptr) << s_strParamSeparator;
    ss << StringUtils::ToString(m_size) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_agent_t_Ptr_String(m_agents, m_agentsVal) << s_strParamSeparator;
    ss << StringUtils::ToString(m_num_agent) << s_strParamSeparator;
    ss << StringUtils::ToString(m_agent_ptr);
    return ss.str();
}

void HSA_APITrace_hsa_amd_memory_lock::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    void* host_ptr,
    size_t size,
    hsa_agent_t* agents,
    int num_agent,
    void** agent_ptr,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_memory_lock;
    m_host_ptr = host_ptr;
    m_size = size;
    m_agents = agents;

    if (nullptr != m_agents)
    {
        m_agentsVal = *m_agents;
    }

    m_num_agent = num_agent;
    m_agent_ptr = agent_ptr;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_memory_unlock
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_memory_unlock::HSA_APITrace_hsa_amd_memory_unlock()
{
}

HSA_APITrace_hsa_amd_memory_unlock::~HSA_APITrace_hsa_amd_memory_unlock()
{
}

std::string HSA_APITrace_hsa_amd_memory_unlock::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_memory_unlock::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_host_ptr);
    return ss.str();
}

void HSA_APITrace_hsa_amd_memory_unlock::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    void* host_ptr,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_memory_unlock;
    m_host_ptr = host_ptr;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_memory_fill
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_memory_fill::HSA_APITrace_hsa_amd_memory_fill()
{
}

HSA_APITrace_hsa_amd_memory_fill::~HSA_APITrace_hsa_amd_memory_fill()
{
}

std::string HSA_APITrace_hsa_amd_memory_fill::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_memory_fill::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_ptr) << s_strParamSeparator;
    ss << StringUtils::ToString(m_value) << s_strParamSeparator;
    ss << StringUtils::ToString(m_count);
    return ss.str();
}

void HSA_APITrace_hsa_amd_memory_fill::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    void* ptr,
    uint32_t value,
    size_t count,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_memory_fill;
    m_ptr = ptr;
    m_value = value;
    m_count = count;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_interop_map_buffer
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_interop_map_buffer::HSA_APITrace_hsa_amd_interop_map_buffer()
{
}

HSA_APITrace_hsa_amd_interop_map_buffer::~HSA_APITrace_hsa_amd_interop_map_buffer()
{
}

std::string HSA_APITrace_hsa_amd_interop_map_buffer::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_interop_map_buffer::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_num_agents) << s_strParamSeparator;
    ss << HSATraceStringUtils::Get_hsa_agent_t_Ptr_String(m_agents, m_agentsVal) << s_strParamSeparator;
    ss << StringUtils::ToString(m_interop_handle) << s_strParamSeparator;
    ss << StringUtils::ToString(m_flags) << s_strParamSeparator;
    ss << StringUtils::ToStringPtr(m_size, m_sizeVal) << s_strParamSeparator;
    ss << StringUtils::ToString(m_ptr) << s_strParamSeparator;
    ss << StringUtils::ToStringPtr(m_metadata_size, m_metadata_sizeVal) << s_strParamSeparator;
    ss << StringUtils::ToString(m_metadata);
    return ss.str();
}

void HSA_APITrace_hsa_amd_interop_map_buffer::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    uint32_t num_agents,
    hsa_agent_t* agents,
    int interop_handle,
    uint32_t flags,
    size_t* size,
    void** ptr,
    size_t* metadata_size,
    const void** metadata,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_interop_map_buffer;
    m_num_agents = num_agents;
    m_agents = agents;

    if (nullptr != m_agents)
    {
        m_agentsVal = *m_agents;
    }

    m_interop_handle = interop_handle;
    m_flags = flags;
    m_size = size;

    if (nullptr != m_size)
    {
        m_sizeVal = *m_size;
    }

    m_ptr = ptr;
    m_metadata_size = metadata_size;

    if (nullptr != m_metadata_size)
    {
        m_metadata_sizeVal = *m_metadata_size;
    }

    m_metadata = metadata;
    m_retVal = retVal;
}

///////////////////////////////////////////////////
/// Class HSA_APITrace_hsa_amd_interop_unmap_buffer
///////////////////////////////////////////////////

HSA_APITrace_hsa_amd_interop_unmap_buffer::HSA_APITrace_hsa_amd_interop_unmap_buffer()
{
}

HSA_APITrace_hsa_amd_interop_unmap_buffer::~HSA_APITrace_hsa_amd_interop_unmap_buffer()
{
}

std::string HSA_APITrace_hsa_amd_interop_unmap_buffer::GetRetString()
{
    return HSATraceStringUtils::Get_hsa_status_t_String(m_retVal);
}

std::string HSA_APITrace_hsa_amd_interop_unmap_buffer::ToString()
{
    std::ostringstream ss;
    ss << StringUtils::ToString(m_ptr);
    return ss.str();
}

void HSA_APITrace_hsa_amd_interop_unmap_buffer::Create(
    ULONGLONG ullStartTime,
    ULONGLONG ullEndTime,
    void* ptr,
    hsa_status_t retVal)
{
    m_ullStart = ullStartTime;
    m_ullEnd = ullEndTime;
    m_type = HSA_API_Type_hsa_amd_interop_unmap_buffer;
    m_ptr = ptr;
    m_retVal = retVal;
}

