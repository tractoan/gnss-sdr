/*!
 * \file tlm_utils.h
 * \brief Class that contains all the configuration parameters for generic
 * telemetry decoder block.
 * \author Carles Fernandez, 2020. cfernandez(at)cttc.es
 *
 * -----------------------------------------------------------------------------
 *
 * Copyright (C) 2010-2020  (see AUTHORS file for a list of contributors)
 *
 * GNSS-SDR is a software defined Global Navigation
 *          Satellite Systems receiver
 *
 * This file is part of GNSS-SDR.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * -----------------------------------------------------------------------------
 */

#ifndef GNSS_SDR_TLM_UTILS_H
#define GNSS_SDR_TLM_UTILS_H

#include <string>

/** \addtogroup Telemetry_Decoder
 * \{ */
/** \addtogroup Telemetry_Decoder_libs
 * \{ */

int save_tlm_matfile(const std::string &dumpfile);

bool tlm_remove_file(const std::string &file_to_remove);

/** \} */
/** \} */
#endif  // GNSS_SDR_TLM_UTILS_H
