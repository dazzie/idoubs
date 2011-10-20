/* Copyright (C) 2010-2011, Mamadou Diop.
 * Copyright (c) 2011, Doubango Telecom. All rights reserved.
 *
 * Contact: Mamadou Diop <diopmamadou(at)doubango(dot)org>
 *       
 * This file is part of iDoubs Project ( http://code.google.com/p/idoubs )
 *
 * idoubs is free software: you can redistribute it and/or modify it under the terms of 
 * the GNU General Public License as published by the Free Software Foundation, either version 3 
 * of the License, or (at your option) any later version.
 *       
 * idoubs is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
 * See the GNU General Public License for more details.
 *       
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */
#import <Foundation/Foundation.h>

#ifndef NGNCONFIGURATIONENTRY_H
#define NGNCONFIGURATIONENTRY_H

#define PCSCF_DISCOVERY_DNS_SRV @"DNS_NAPTR_SRV"

// General
#define GENERAL_AUTOSTART @"GENERAL_AUTOSTART"
#define GENERAL_SHOW_WELCOME_SCREEN @"GENERAL_SHOW_WELCOME_SCREEN"
#define GENERAL_FULL_SCREEN_VIDEO @"GENERAL_FULL_SCREEN_VIDEO"
#define GENERAL_USE_FFC @"GENERAL_USE_FFC"
#define GENERAL_INTERCEPT_OUTGOING_CALLS @"GENERAL_INTERCEPT_OUTGOING_CALLS"
#define GENERAL_VIDEO_FLIP @"GENERAL_VIDEO_FLIP"
#define GENERAL_AUDIO_PLAY_LEVEL @"GENERAL_AUDIO_PLAY_LEVEL"
#define GENERAL_ENUM_DOMAIN @"GENERAL_ENUM_DOMAIN"

// Identity
#define IDENTITY_DISPLAY_NAME @"IDENTITY_DISPLAY_NAME"
#define IDENTITY_IMPU @"IDENTITY_IMPU"
#define IDENTITY_IMPI @"IDENTITY_IMPI"
#define IDENTITY_PASSWORD @"IDENTITY_PASSWORD"

// Network
#define NETWORK_REGISTRATION_TIMEOUT @"NETWORK_REGISTRATION_TIMEOUT"
#define NETWORK_REALM @"NETWORK_REALM"
#define NETWORK_USE_WIFI @"NETWORK_USE_WIFI"
#define NETWORK_USE_3G @"NETWORK_USE_3G"
#define NETWORK_USE_EARLY_IMS @"NETWORK_USE_EARLY_IMS"
#define NETWORK_IP_VERSION @"NETWORK_IP_VERSION"
#define NETWORK_PCSCF_DISCOVERY_USE_DNS @"NETWORK_PCSCF_DISCOVERY_USE_DNS"
#define NETWORK_PCSCF_DISCOVERY_USE_DHCP @"NETWORK_PCSCF_DISCOVERY_USE_DHCP"
#define NETWORK_PCSCF_HOST @"NETWORK_PCSCF_HOST"
#define NETWORK_PCSCF_PORT @"NETWORK_PCSCF_PORT"
#define NETWORK_USE_SIGCOMP @"NETWORK_USE_SIGCOMP"
#define NETWORK_TRANSPORT @"NETWORK_TRANSPORT"

// NAT Traversal
#define NATT_HACK_AOR @"NATT_HACK_AOR"
#define NATT_HACK_AOR_TIMEOUT @"NATT_HACK_AOR_TIMEOUT"
#define NATT_USE_STUN @"NATT_USE_STUN"
#define NATT_USE_ICE @"NATT_USE_ICE"
#define NATT_USE_STUN_DISCO @"NATT_USE_STUN_DISCO"
#define NATT_STUN_SERVER @"NATT_STUN_SERVER"
#define NATT_STUN_PORT @"NATT_STUN_PORT"

// QoS
#define QOS_PRECOND_BANDWIDTH @"QOS_PRECOND_BANDWIDTH"
#define QOS_PRECOND_STRENGTH @"QOS_PRECOND_STRENGTH"
#define QOS_PRECOND_TYPE @"QOS_PRECOND_TYPE"
#define QOS_REFRESHER @"QOS_REFRESHER"
#define QOS_SIP_CALLS_TIMEOUT @"QOS_SIP_CALLS_TIMEOUT"
#define QOS_SIP_SESSIONS_TIMEOUT @"QOS_SIP_SESSIONS_TIMEOUT"
#define QOS_USE_SESSION_TIMERS @"QOS_USE_SESSION_TIMERS"


// Media
#define MEDIA_CODECS @"MEDIA_CODECS"
#define MEDIA_CODEC_USE_G722 @"MEDIA_CODEC_USE_G722"
#define MEDIA_CODEC_USE_G729AB @"MEDIA_CODEC_USE_G729AB"
#define MEDIA_CODEC_USE_AMR_NB_OA @"MEDIA_CODEC_USE_AMR_NB_OA"
#define MEDIA_CODEC_USE_AMR_NB_BE @"MEDIA_CODEC_USE_AMR_NB_BE"
#define MEDIA_CODEC_USE_GSM @"MEDIA_CODEC_USE_GSM"
#define MEDIA_CODEC_USE_PCMA @"MEDIA_CODEC_USE_PCMA"
#define MEDIA_CODEC_USE_PCMU @"MEDIA_CODEC_USE_PCMU"
#define MEDIA_CODEC_USE_SPEEX_NB @"MEDIA_CODEC_USE_SPEEX_NB"
#define MEDIA_CODEC_USE_SPEEX_WB @"MEDIA_CODEC_USE_SPEEX_WB"
#define MEDIA_CODEC_USE_SPEEX_UWB @"MEDIA_CODEC_USE_SPEEX_UWB"
#define MEDIA_CODEC_USE_VP8 @"MEDIA_CODEC_USE_VP8"
#define MEDIA_CODEC_USE_H263 @"MEDIA_CODEC_USE_H263"
#define MEDIA_CODEC_USE_H263P @"MEDIA_CODEC_USE_H263P"
#define MEDIA_CODEC_USE_H264BP10 @"MEDIA_CODEC_USE_H264BP10"
#define MEDIA_CODEC_USE_H264BP20 @"MEDIA_CODEC_USE_H264BP20"
#define MEDIA_CODEC_USE_H264BP30 @"MEDIA_CODEC_USE_H264BP30"
#define MEDIA_CODEC_USE_THEORA @"MEDIA_CODEC_USE_THEORA"
#define MEDIA_CODEC_USE_MP4VES @"MEDIA_CODEC_USE_MP4VES"
#define MEDIA_AUDIO_RESAMPLER_QUALITY @"MEDIA_AUDIO_RESAMPLER_QUALITY"
#define MEDIA_AUDIO_CONSUMER_GAIN @"MEDIA_AUDIO_CONSUMER_GAIN"
#define MEDIA_AUDIO_PRODUCER_GAIN @"MEDIA_AUDIO_PRODUCER_GAIN"
#define MEDIA_AUDIO_CONSUMER_ATTENUATION @"MEDIA_AUDIO_CONSUMER_ATTENUATION"
#define MEDIA_AUDIO_PRODUCER_ATTENUATION @"MEDIA_AUDIO_PRODUCER_ATTENUATION"

// Security
#define SECURITY_IMSAKA_AMF @"SECURITY_IMSAKA_AMF"
#define SECURITY_IMSAKA_OPID @"SECURITY_IMSAKA_OPID"

// XCAP
#define XCAP_PASSWORD @"XCAP_PASSWORD"
#define XCAP_USERNAME @"XCAP_USERNAME"
#define XCAP_ENABLED @"XCAP_ENABLED"
#define XCAP_XCAP_ROOT @"XCAP_XCAP_ROOT"

// RCS (Rich Communication Suite)
#define RCS_AVATAR_PATH @"RCS_AVATAR_PATH"
#define RCS_USE_BINARY_SMS @"RCS_USE_BINARY_SMS"
#define RCS_CONF_FACT @"RCS_CONF_FACT"
#define RCS_FREE_TEXT @"RCS_FREE_TEXT"
#define RCS_HACK_SMS @"RCS_HACK_SMS"
#define RCS_USE_MSRP_FAILURE @"RCS_USE_MSRP_FAILURE"
#define RCS_USE_MSRP_SUCCESS @"RCS_USE_MSRP_SUCCESS"
#define RCS_USE_MWI @"RCS_USE_MWI"
#define RCS_USE_OMAFDR @"RCS_USE_OMAFDR"
#define RCS_USE_PARTIAL_PUB @"RCS_USE_PARTIAL_PUB"
#define RCS_USE_PRESENCE @"RCS_USE_PRESENCE"
#define RCS_USE_RLS @"RCS_USE_RLS"
#define RCS_SMSC @"RCS_SMSC"
#define RCS_STATUS  @"RCS_STATUS"
#define RCS_AUTO_ACCEPT_PAGER_MODE_IM	@"RCS_AUTO_ACCEPT_PAGER_MODE_IM"


//
//      Default values
//

// General
#define DEFAULT_GENERAL_SHOW_WELCOME_SCREEN YES
#define DEFAULT_GENERAL_FULL_SCREEN_VIDEO YES
#define DEFAULT_GENERAL_INTERCEPT_OUTGOING_CALLS YES
#define DEFAULT_GENERAL_USE_FFC YES
#define DEFAULT_GENERAL_FLIP_VIDEO NO
#define DEFAULT_GENERAL_AUTOSTART YES
#define DEFAULT_GENERAL_AUDIO_PLAY_LEVEL 0.25f
#define DEFAULT_GENERAL_ENUM_DOMAIN @"e164.org"

//      Identity
#define DEFAULT_IDENTITY_DISPLAY_NAME @"John Doe"
#define DEFAULT_IDENTITY_IMPU @"sip:johndoe@doubango.org"
#define DEFAULT_IDENTITY_IMPI @"johndoe"
#define DEFAULT_IDENTITY_PASSWORD @""

// Network
#define DEFAULT_NETWORK_REGISTRATION_TIMEOUT 3200
#define DEFAULT_NETWORK_REALM @"doubango.org"
#define DEFAULT_NETWORK_USE_WIFI YES
#define DEFAULT_NETWORK_USE_3G NO
#define DEFAULT_NETWORK_PCSCF_DISCOVERY_USE_DNS NO
#define DEFAULT_NETWORK_PCSCF_DISCOVERY_USE_DHCP NO
#define DEFAULT_NETWORK_PCSCF_HOST @"127.0.0.1"
#define DEFAULT_NETWORK_PCSCF_PORT 5060
#define DEFAULT_NETWORK_USE_SIGCOMP NO
#define DEFAULT_NETWORK_TRANSPORT @"udp"
#define DEFAULT_NETWORK_IP_VERSION @"ipv4"
#define DEFAULT_NETWORK_USE_EARLY_IMS NO


// NAT Traversal
#define DEFAULT_NATT_HACK_AOR_TIMEOUT 2000
#define DEFAULT_NATT_HACK_AOR NO
#define DEFAULT_NATT_USE_STUN NO
#define DEFAULT_NATT_USE_ICE NO
#define DEFAULT_NATT_USE_STUN_DISCO NO
#define DEFAULT_NATT_STUN_SERVER @"numb.viagenie.ca"
#define DEFAULT_NATT_STUN_PORT 3478

// QoS
#define DEFAULT_QOS_PRECOND_BANDWIDTH @"Low"
//#define DEFAULT_QOS_PRECOND_STRENGTH tmedia_qos_strength_t.tmedia_qos_strength_none.toString()
//#define DEFAULT_QOS_PRECOND_TYPE tmedia_qos_stype_t.tmedia_qos_stype_none.toString()
#define DEFAULT_QOS_REFRESHER @"none"
#define DEFAULT_QOS_SIP_SESSIONS_TIMEOUT 600000
#define DEFAULT_QOS_SIP_CALLS_TIMEOUT 3600
#define DEFAULT_QOS_USE_SESSION_TIMERS NO

// Media
#define DEFAULT_MEDIA_CODECS -1
#define DEFAULT_MEDIA_CODEC_USE_G722 YES
#define DEFAULT_MEDIA_CODEC_USE_G729AB NO
#define DEFAULT_MEDIA_CODEC_USE_AMR_NB_OA NO
#define DEFAULT_MEDIA_CODEC_USE_AMR_NB_BE NO
#define DEFAULT_MEDIA_CODEC_USE_GSM YES
#define DEFAULT_MEDIA_CODEC_USE_PCMA YES
#define DEFAULT_MEDIA_CODEC_USE_PCMU YES
#define DEFAULT_MEDIA_CODEC_USE_SPEEX_NB NO
#define DEFAULT_MEDIA_CODEC_USE_SPEEX_WB NO
#define DEFAULT_MEDIA_CODEC_USE_SPEEX_UWB NO
#define DEFAULT_MEDIA_CODEC_USE_VP8 YES
#define DEFAULT_MEDIA_CODEC_USE_H263 NO
#define DEFAULT_MEDIA_CODEC_USE_H263P YES
#define DEFAULT_MEDIA_CODEC_USE_H264BP10 NO
#define DEFAULT_MEDIA_CODEC_USE_H264BP20 NO
#define DEFAULT_MEDIA_CODEC_USE_H264BP30 YES
#define DEFAULT_MEDIA_CODEC_USE_THEORA NO
#define DEFAULT_MEDIA_CODEC_USE_MP4VES YES

#define DEFAULT_MEDIA_AUDIO_RESAMPLER_QUALITY 0
#define DEFAULT_MEDIA_AUDIO_CONSUMER_GAIN 0 // disabled
#define DEFAULT_MEDIA_AUDIO_PRODUCER_GAIN 0 // disabled
#define DEFAULT_MEDIA_AUDIO_CONSUMER_ATTENUATION 1.f // disabled
#define DEFAULT_MEDIA_AUDIO_PRODUCER_ATTENUATION 1.f // disabled

// Security
#define DEFAULT_SECURITY_IMSAKA_AMF @"0x0000"
#define DEFAULT_SECURITY_IMSAKA_OPID @"0x00000000000000000000000000000000"

// XCAP
#define DEFAULT_XCAP_ENABLED NO
#define DEFAULT_XCAP_ROOT @"http://doubango.org:8080/services"
#define DEFAULT_XCAP_USERNAME @"sip:johndoe@doubango.org"
#define DEFAULT_XCAP_PASSWORD @""

// RCS (Rich Communication Suite)
#define DEFAULT_RCS_AVATAR_PATH @""
#define DEFAULT_RCS_USE_BINARY_SM NO 
#define DEFAULT_RCS_CONF_FACT @"sip:Conference-Factory@doubango.org"
#define DEFAULT_RCS_FREE_TEXT @"Hello world"
#define DEFAULT_RCS_HACK_SMS NO
#define DEFAULT_RCS_USE_MSRP_FAILURE YES
#define DEFAULT_RCS_USE_MSRP_SUCCESS NO
#define DEFAULT_RCS_USE_BINARY_SMS NO
#define DEFAULT_RCS_USE_MWI NO
#define DEFAULT_RCS_USE_OMAFDR NO
#define DEFAULT_RCS_USE_PARTIAL_PUB NO
#define DEFAULT_RCS_USE_PRESENCE NO
#define DEFAULT_RCS_USE_RLS NO
#define DEFAULT_RCS_SMSC @"sip:+331000000000@doubango.org"
// static const NgnPresenceStatus DEFAULT_RCS_STATUS NgnPresenceStatus.Online
#define DEFAULT_RCS_AUTO_ACCEPT_PAGER_MODE_IM YES


#endif /* NGNCONFIGURATIONENTRY_H */