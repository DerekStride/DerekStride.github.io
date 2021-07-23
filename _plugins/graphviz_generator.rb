require 'pry-byebug'

module Jekyll
  class GraphvizGenerator < Generator
    safe true
    priority :lowest

    # A static file to hold the generated image after generation
    # so that Jekyll will copy it into the site output directory
    class GraphvizFile < StaticFile
      def write(dest)
        true
      end
    end

    def generate(site)
      Jekyll.logger.info("Graphviz:", "Starting")
      Jekyll.logger.info("Graphviz:", "bin/graphviz-generate is not executable.") unless File.executable?("bin/graphviz-generate")

      output = `bin/graphviz-generate #{site.dest}/assets/images/graphs 2>&1`
      Jekyll.logger.info("Graphviz:", output)

      Dir["#{site.dest}/assets/images/graphs/*"].each do |filename|
        site.static_files << GraphvizFile.new(
          site,
          site.dest,
          File.dirname(filename).gsub("#{site.dest}/", ""),
          File.basename(filename),
        )
      end

      Jekyll.logger.info("Graphviz:", "Complete")
    end
  end
end
