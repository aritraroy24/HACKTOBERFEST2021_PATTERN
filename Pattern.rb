def pyramid(height)
  height.times {|n|
    print ' ' * (height - n)
    puts 'R' * (2 * n + 1)
  }
end
pyramid 10
