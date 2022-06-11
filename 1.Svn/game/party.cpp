#find

	if (leader && (leader->IsEquipUniqueItem(UNIQUE_ITEM_PARTY_BONUS_EXP) || leader->IsEquipUniqueItem(UNIQUE_ITEM_PARTY_BONUS_EXP_MALL)
		|| leader->IsEquipUniqueItem(UNIQUE_ITEM_PARTY_BONUS_EXP_GIFT) || leader->IsEquipUniqueGroup(10010)))
	{
		// 중국측 육도 적용을 확인해야한다.
		iBonusPartyExpFromItem = 30;
	}

#add after

	// @nowitem001 begin
	if (leader && (leader->IsEquipUniqueItem(UNIQUE_ITEM_PARTY_BONUS_EXP_GOLD) || leader->IsEquipUniqueItem(UNIQUE_ITEM_PARTY_BONUS_EXP_MALL_GOLD)))
	{
		// 중국측 육도 적용을 확인해야한다.
		iBonusPartyExpFromItem = 100;
	}
	// @nowitem001 end