# SRP (Single Responsibility Principle)
# Separate the code into simple, well-defined, well-intentioned tasks and give clear names.

# Before
class ReportGenerator
  def generate_report(data)
    # Process the data
    processed_data = data.map { |item| Processor.process(item) }

    # Convert data to JSON
    json_data = processed_data.to_json

    # Save the report to a file
    File.open('report.json', 'w') do |file|
      file.write(json_data)
    end

    # Send the report via email
    Email.send(data: json_data)
  end
end

data = ["a", "b", "c", "d"]
report = ReportGenerator.new
report.generate_report(data)


# After
class ReportGenerator
  def generate_report(data)
    processed_data = process_data(data)
    json_data = convert_to_json(processed_data)
    save_report(json_data)
    send_report(json_data)
  end

  private

  def process_data(data)
    data.map { |item| Processor.process(item) }
  end

  def convert_to_json(data)
    data.to_json
  end

  def save_report(json_data)
    File.open('report.json', 'w') do |file|
      file.write(json_data)
    end
  end

  def send_report(json_data)
    Email.send(data: json_data)
  end
end

data = ["a", "b", "c", "d"]
report = ReportGenerator.new
report.generate_report(data)
