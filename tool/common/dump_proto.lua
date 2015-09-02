require "protobuf"
function dump_proto(buffer)
  local t = protobuf.decode("google.protobuf.FileDescriptorSet", buffer)
  
  local proto = t.file[1]
  
  print(proto.name)
  print(proto.package)
  
  local message = proto.message_type
  
  for _,v in ipairs(message) do
    print(v.name)
    for _,v in ipairs(v.field) do
      print("\t".. v.name .. " ["..v.number.."] " .. v.label)
    end
  end

end