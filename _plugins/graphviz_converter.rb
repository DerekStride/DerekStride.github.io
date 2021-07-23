module Jekyll
  class GraphvizConverter < Converter
    safe true
    priority :low

    def setup
      require 'ruby-graphviz'
      @setup = true
    end

    def matches(ext)
      ext =~ /^\.dot$/i
    end

    def output_ext(ext)
      ".svg"
    end

    def convert(content)
      setup unless @setup
      GraphViz.parse_string(content).output(svg: String)
    end
  end
end
