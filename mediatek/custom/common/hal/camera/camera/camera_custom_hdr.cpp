
#include "camera_custom_hdr.h"



#define MAX_HDR_GAIN_ARRAY_ELEM		11	// Maximun HDR GainArray element number.



static MUINT32 au4HdrGainArray[MAX_HDR_GAIN_ARRAY_ELEM] =
{
	CUST_HDR_GAIN_00,
	CUST_HDR_GAIN_01,
	CUST_HDR_GAIN_02,
	CUST_HDR_GAIN_03,
	CUST_HDR_GAIN_04,
	CUST_HDR_GAIN_05,
	CUST_HDR_GAIN_06,
	CUST_HDR_GAIN_07,
	CUST_HDR_GAIN_08,
	CUST_HDR_GAIN_09,
	CUST_HDR_GAIN_10,
};



///////////////////////////////////////////////////////////////////////////
/// @brief Get the customer-set value for BlurRatio.
///////////////////////////////////////////////////////////////////////////
MUINT32 CustomHdrBlurRatioGet(void)
{
	return CUST_HDR_BLUR_RATIO;
}


///////////////////////////////////////////////////////////////////////////
/// @brief Get the customer-set value for Gain.
///////////////////////////////////////////////////////////////////////////
MUINT32 CustomHdrGainArrayGet(MUINT32 u4ArrayIndex)
{
	if (u4ArrayIndex > MAX_HDR_GAIN_ARRAY_ELEM-1)
		u4ArrayIndex = MAX_HDR_GAIN_ARRAY_ELEM-1;

	return au4HdrGainArray[u4ArrayIndex];
}


///////////////////////////////////////////////////////////////////////////
/// @brief Get the customer-set value for BottomFlareRatio.
///////////////////////////////////////////////////////////////////////////
double CustomHdrBottomFlareRatioGet(void)
{
	return CUST_HDR_BOTTOM_FLARE_RATIO;
}


///////////////////////////////////////////////////////////////////////////
/// @brief Get the customer-set value for TopFlareRatio.
///////////////////////////////////////////////////////////////////////////
double CustomHdrTopFlareRatioGet(void)
{
	return CUST_HDR_TOP_FLARE_RATIO;
}


///////////////////////////////////////////////////////////////////////////
/// @brief Get the customer-set value for BottomFlareBound.
///////////////////////////////////////////////////////////////////////////
MUINT32 CustomHdrBottomFlareBoundGet(void)
{
	return CUST_HDR_BOTTOM_FLARE_BOUND;
}


///////////////////////////////////////////////////////////////////////////
/// @brief Get the customer-set value for TopFlareBound.
///////////////////////////////////////////////////////////////////////////
MUINT32 CustomHdrTopFlareBoundGet(void)
{
	return CUST_HDR_TOP_FLARE_BOUND;
}


///////////////////////////////////////////////////////////////////////////
/// @brief Get the customer-set value for ThHigh.
///////////////////////////////////////////////////////////////////////////
MINT32 CustomHdrThHighGet(void)
{
	return CUST_HDR_TH_HIGH;
}


///////////////////////////////////////////////////////////////////////////
/// @brief Get the customer-set value for ThLow.
///////////////////////////////////////////////////////////////////////////
MINT32 CustomHdrThLowGet(void)
{
	return CUST_HDR_TH_LOW;
}


///////////////////////////////////////////////////////////////////////////
/// @brief Get the customer-set value for TargetLevelSub.
///////////////////////////////////////////////////////////////////////////
MUINT32 CustomHdrTargetLevelSubGet(void)
{
	return CUST_HDR_TARGET_LEVEL_SUB;
}


