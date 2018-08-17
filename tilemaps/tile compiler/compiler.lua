map = require "overworld256"
beasts = require "beasts"

out = io.open("POKBEAST.DAT", "wb")
if out == nil then
	print("idk")
else
	for i,v in ipairs(map.layers[1].data) do
		out:write(string.char(v))
	end
	-- beast test
	print("end of map " .. out:seek("end") )
	for i,v in ipairs(beasts.data) do
		out:write(string.char(v))
	end
	for i,v in ipairs(beasts.pallet) do
		out:write(string.char(v))
	end
	print("end of beast " .. out:seek("end") )
	out:close()
end

