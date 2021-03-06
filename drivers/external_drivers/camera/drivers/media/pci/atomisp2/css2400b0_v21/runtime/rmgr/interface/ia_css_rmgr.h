/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2014 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef _IA_CSS_RMGR_H
#define _IA_CSS_RMGR_H

#include "storage_class.h"
#include <ia_css_err.h>

#ifndef __INLINE_RMGR__
#define STORAGE_CLASS_RMGR_H STORAGE_CLASS_EXTERN
#define STORAGE_CLASS_RMGR_C
#else				/* __INLINE_RMGR__ */
#define STORAGE_CLASS_RMGR_H STORAGE_CLASS_INLINE
#define STORAGE_CLASS_RMGR_C STORAGE_CLASS_INLINE
#endif				/* __INLINE_RMGR__ */

/**
 * @brief Initialize resource manager (host/common)
 */
enum ia_css_err ia_css_rmgr_init(void);

/**
 * @brief Uninitialize resource manager (host/common)
 */
void ia_css_rmgr_uninit(void);

/*****************************************************************
 * Interface definition - resource type (host/common)
 *****************************************************************
 *
 * struct ia_css_rmgr_<type>_pool;
 * struct ia_css_rmgr_<type>_handle;
 *
 * STORAGE_CLASS_RMGR_H void ia_css_rmgr_init_<type>(
 *	struct ia_css_rmgr_<type>_pool *pool);
 *
 * STORAGE_CLASS_RMGR_H void ia_css_rmgr_uninit_<type>(
 *	struct ia_css_rmgr_<type>_pool *pool);
 *
 * STORAGE_CLASS_RMGR_H void ia_css_rmgr_acq_<type>(
 *	struct ia_css_rmgr_<type>_pool *pool,
 *	struct ia_css_rmgr_<type>_handle **handle);
 *
 * STORAGE_CLASS_RMGR_H void ia_css_rmgr_rel_<type>(
 *	struct ia_css_rmgr_<type>_pool *pool,
 *	struct ia_css_rmgr_<type>_handle **handle);
 *
 *****************************************************************
 * Interface definition - refcounting (host/common)
 *****************************************************************
 *
 * void ia_css_rmgr_refcount_retain_<type>(
 *	struct ia_css_rmgr_<type>_handle **handle);
 *
 * void ia_css_rmgr_refcount_release_<type>(
 *	struct ia_css_rmgr_<type>_handle **handle);
 */

#include "ia_css_rmgr_vbuf.h"

#endif	/* _IA_CSS_RMGR_H */
