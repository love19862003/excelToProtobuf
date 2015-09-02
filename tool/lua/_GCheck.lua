local GTableCheck = {
ItemBase = {
 sell= {
   index = 4,
   condition = {
       {
         {type = 2, index = 0,table = "ItemSell",head = "sell_id",},
       },
     }
   },
 show= {
   index = 5,
   condition = {
       {
         {type = 1, index = 0,table = "ItemBase",enum = "ITEM_TYPE",value = "ITEM_TYPE_1",},
         {type = 0, index = 1,},
       },
       {
         {type = 1, index = 0,table = "ItemBase",enum = "ITEM_TYPE",value = "ITEM_TYPE_2",},
         {type = 0, index = 1,},
       },
       {
         {type = 3, index = 0,value = 3,},
         {type = 0, index = 1,},
       },
       {
         {type = 3, index = 0,value = 4,},
         {type = 0, index = 1,},
       },
     }
   },
},
}
 return GTableCheck